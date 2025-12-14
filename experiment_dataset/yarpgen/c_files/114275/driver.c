#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
int var_1 = 1587802400;
unsigned char var_2 = (unsigned char)99;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_10 = 4062370897510390185LL;
unsigned long long int var_12 = 15397415747610460922ULL;
int zero = 0;
int var_15 = 142503293;
signed char var_16 = (signed char)30;
unsigned char var_17 = (unsigned char)185;
unsigned long long int var_18 = 2180281174764316756ULL;
long long int var_19 = -2938638328745768925LL;
unsigned long long int var_20 = 4425938819511542825ULL;
int arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
signed char arr_2 [15] [15] [15] ;
_Bool arr_3 [15] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -885284162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)48;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
