#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25583;
int var_3 = 807590810;
signed char var_6 = (signed char)43;
long long int var_7 = -2097103887910676402LL;
short var_8 = (short)-26585;
unsigned int var_10 = 1821906292U;
int var_11 = 1909602079;
unsigned short var_12 = (unsigned short)5968;
unsigned char var_14 = (unsigned char)42;
signed char var_15 = (signed char)77;
int var_16 = 1950596789;
int zero = 0;
unsigned char var_18 = (unsigned char)31;
unsigned int var_19 = 3457146037U;
unsigned int var_20 = 3356453609U;
unsigned int var_21 = 4066017284U;
short arr_0 [19] ;
short arr_1 [19] [19] ;
int arr_2 [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)2668;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3175;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1781761879;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 619533222 : 2114765699;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
