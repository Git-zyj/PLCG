#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-139;
short var_4 = (short)2212;
long long int var_5 = -8327879427895668444LL;
unsigned long long int var_6 = 15289318245489367339ULL;
int var_8 = -2107379920;
int zero = 0;
long long int var_11 = -8030117585830827006LL;
unsigned long long int var_12 = 7946362804710027209ULL;
long long int var_13 = -6741662326475915595LL;
long long int var_14 = 4919999260122730606LL;
unsigned char var_15 = (unsigned char)12;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)247;
long long int var_18 = 1217962710555335149LL;
_Bool arr_0 [11] ;
int arr_7 [11] ;
unsigned char arr_9 [11] ;
unsigned int arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 409880917;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 2387733943U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
