#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)165;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)90;
int var_7 = -1021800150;
short var_9 = (short)30546;
signed char var_10 = (signed char)-69;
unsigned int var_13 = 1511624409U;
int zero = 0;
unsigned short var_14 = (unsigned short)49128;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)171;
unsigned long long int var_18 = 10158367731438154378ULL;
_Bool arr_0 [23] ;
unsigned int arr_2 [23] ;
_Bool arr_3 [23] [23] ;
unsigned int arr_5 [23] [23] ;
signed char arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2500600335U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3135699548U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)86;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
