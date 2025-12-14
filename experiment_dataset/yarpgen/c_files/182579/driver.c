#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23636;
unsigned int var_1 = 1582933361U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_10 = -7836760244658789317LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -204900324;
_Bool var_13 = (_Bool)1;
int var_14 = 1008350702;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2448467314U;
unsigned long long int var_17 = 80080174649779936ULL;
short var_18 = (short)-29711;
unsigned int var_19 = 3715062459U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1273855893U;
unsigned long long int var_22 = 8534349542240396514ULL;
int var_23 = -115555919;
_Bool var_24 = (_Bool)0;
_Bool arr_0 [20] [20] ;
unsigned short arr_1 [20] [20] ;
short arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
_Bool arr_4 [23] ;
unsigned long long int arr_9 [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)13574;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)10310;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2157561327U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 15522981951662915584ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 3312280697U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
