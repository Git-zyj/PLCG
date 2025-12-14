#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7773004272314358407LL;
short var_2 = (short)-22525;
short var_3 = (short)-31721;
unsigned int var_4 = 571135225U;
unsigned short var_5 = (unsigned short)43372;
int var_7 = -2101009327;
unsigned short var_8 = (unsigned short)4801;
unsigned short var_9 = (unsigned short)9615;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3256129855U;
unsigned int var_14 = 627692588U;
long long int var_16 = -1381008301364611976LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)40808;
unsigned short var_22 = (unsigned short)12362;
short var_23 = (short)-24759;
_Bool var_24 = (_Bool)0;
int var_25 = 873968483;
_Bool arr_6 [24] [24] [24] ;
_Bool arr_7 [24] ;
unsigned short arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11274 : (unsigned short)5775;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
