#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -353913795;
int var_3 = -416528858;
long long int var_6 = 4508257563242756365LL;
long long int var_12 = 435507890270450967LL;
int zero = 0;
int var_13 = 718850196;
_Bool var_14 = (_Bool)1;
int var_15 = -1857795812;
unsigned short var_16 = (unsigned short)32497;
unsigned int var_17 = 2174491070U;
_Bool var_18 = (_Bool)0;
int arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
long long int arr_6 [24] ;
unsigned short arr_10 [24] [24] [24] ;
unsigned int arr_13 [24] ;
long long int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -227869966 : -1517800044;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 93730732U : 2785602930U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1155524673171432427LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)57693 : (unsigned short)7883;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 4101382093U : 2951963450U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -440424379463327763LL : 1827434543288591705LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
