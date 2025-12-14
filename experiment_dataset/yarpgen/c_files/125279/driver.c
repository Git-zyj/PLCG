#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1880302213;
signed char var_1 = (signed char)-113;
signed char var_2 = (signed char)33;
short var_3 = (short)-32071;
unsigned long long int var_4 = 18123620905663243561ULL;
int var_8 = 1876604567;
unsigned short var_10 = (unsigned short)33812;
short var_11 = (short)-18731;
unsigned int var_12 = 1692734428U;
int var_13 = -1773992066;
int zero = 0;
short var_14 = (short)-28264;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)5169;
unsigned long long int var_17 = 15829538830607504685ULL;
unsigned int var_18 = 4249518567U;
unsigned int var_19 = 957187137U;
short var_20 = (short)-21675;
short arr_2 [14] [14] ;
unsigned long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)22825;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 11855908726485548625ULL : 8078244183677732267ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
