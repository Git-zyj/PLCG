#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20074;
unsigned short var_1 = (unsigned short)45914;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)60699;
unsigned short var_7 = (unsigned short)53390;
unsigned int var_9 = 3428764350U;
unsigned short var_10 = (unsigned short)27981;
unsigned short var_12 = (unsigned short)32087;
int zero = 0;
unsigned short var_13 = (unsigned short)57873;
unsigned int var_14 = 3298776567U;
unsigned int var_15 = 808278762U;
unsigned short var_16 = (unsigned short)63631;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5548;
_Bool arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned int arr_2 [11] ;
unsigned int arr_3 [11] ;
unsigned short arr_4 [11] ;
unsigned int arr_14 [11] [11] ;
unsigned short arr_5 [11] ;
unsigned int arr_6 [11] ;
unsigned short arr_15 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4256532279U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 180651173U : 2399248879U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)38885;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 2391991307U : 1108145733U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55841 : (unsigned short)46030;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3767823941U : 9669343U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)4284 : (unsigned short)13105;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
