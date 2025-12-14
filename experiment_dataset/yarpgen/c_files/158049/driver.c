#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2121649588U;
unsigned int var_1 = 2764772546U;
unsigned int var_3 = 458883977U;
unsigned int var_4 = 1542931821U;
unsigned short var_5 = (unsigned short)46266;
unsigned int var_7 = 948190208U;
unsigned int var_8 = 1923050729U;
signed char var_9 = (signed char)94;
unsigned short var_11 = (unsigned short)31623;
unsigned int var_12 = 3719282027U;
unsigned long long int var_13 = 8376827493657072851ULL;
int zero = 0;
signed char var_14 = (signed char)92;
signed char var_15 = (signed char)43;
unsigned short var_16 = (unsigned short)36473;
unsigned int var_17 = 2891839689U;
unsigned long long int var_18 = 5422942897287366276ULL;
unsigned short var_19 = (unsigned short)13593;
int arr_5 [16] ;
unsigned int arr_7 [19] ;
unsigned int arr_8 [19] [19] ;
unsigned int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2023910952;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2544905801U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 276360271U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 4114573739U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
