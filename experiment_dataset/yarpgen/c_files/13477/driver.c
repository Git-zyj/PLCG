#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1082911650;
long long int var_1 = -1164487338514587575LL;
signed char var_2 = (signed char)44;
long long int var_3 = 1628017873905555033LL;
int var_4 = -1432039223;
int var_6 = 754800848;
long long int var_9 = 2867229460671043499LL;
long long int var_10 = -7502205803767642737LL;
int zero = 0;
int var_13 = 733631400;
_Bool var_14 = (_Bool)1;
int var_15 = 40801724;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)102;
int var_18 = -1983862711;
signed char var_19 = (signed char)59;
signed char var_20 = (signed char)22;
int arr_0 [23] ;
long long int arr_3 [23] [23] ;
long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -5861184;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -8473554866115393713LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 7029100491783295408LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
