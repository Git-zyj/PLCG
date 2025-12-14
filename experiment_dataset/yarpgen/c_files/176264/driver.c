#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -803599394032404455LL;
unsigned short var_3 = (unsigned short)32294;
short var_5 = (short)-22981;
unsigned short var_6 = (unsigned short)4625;
short var_10 = (short)23431;
signed char var_12 = (signed char)89;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1352901828080155771LL;
long long int var_19 = 7448003913652090198LL;
signed char var_20 = (signed char)-13;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5289117073856113279LL;
int var_23 = -576216909;
unsigned long long int var_24 = 10331166063264453684ULL;
int var_25 = 805275171;
long long int var_26 = 1203389833672904593LL;
_Bool arr_1 [22] [22] ;
_Bool arr_2 [22] [22] ;
unsigned int arr_7 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 3058892761U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
