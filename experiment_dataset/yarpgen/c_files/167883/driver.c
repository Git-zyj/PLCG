#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4911526604532390834ULL;
signed char var_3 = (signed char)72;
unsigned short var_4 = (unsigned short)22799;
unsigned short var_5 = (unsigned short)16600;
unsigned char var_8 = (unsigned char)66;
signed char var_9 = (signed char)27;
unsigned long long int var_10 = 5602823045451870117ULL;
unsigned short var_11 = (unsigned short)18436;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-10892;
unsigned short var_14 = (unsigned short)3273;
short var_15 = (short)-28357;
signed char var_16 = (signed char)114;
short var_17 = (short)-13636;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
unsigned int arr_2 [23] ;
short arr_10 [18] ;
unsigned char arr_7 [23] [23] ;
unsigned int arr_13 [18] ;
unsigned int arr_22 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 11803550948127245136ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3290328500U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1007138227U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)19172 : (short)27399;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3495889809U : 2967540881U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 3321779259U : 2908675749U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
