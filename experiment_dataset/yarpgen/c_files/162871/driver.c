#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)58841;
long long int var_2 = 4714211082699370975LL;
unsigned int var_3 = 191913740U;
unsigned long long int var_4 = 6435448987786109681ULL;
unsigned int var_6 = 408751940U;
unsigned int var_7 = 555810373U;
unsigned long long int var_8 = 8141870820695903173ULL;
unsigned short var_9 = (unsigned short)43171;
short var_11 = (short)-13759;
unsigned long long int var_12 = 9873360658143342434ULL;
short var_13 = (short)-12053;
int zero = 0;
unsigned long long int var_14 = 15635839120039619654ULL;
unsigned int var_15 = 1575204712U;
unsigned long long int var_16 = 806891069280439030ULL;
unsigned int var_17 = 3804276509U;
_Bool var_18 = (_Bool)1;
unsigned short arr_4 [13] [13] ;
unsigned int arr_5 [13] [13] ;
long long int arr_8 [13] [13] [13] [13] ;
unsigned int arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)52747 : (unsigned short)33047;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 85968103U : 1630341444U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 8180125623655650147LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3873003742U : 2030659523U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
