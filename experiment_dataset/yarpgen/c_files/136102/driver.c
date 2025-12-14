#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6646249176907930556LL;
long long int var_3 = -8551094969696077160LL;
int var_6 = 779005672;
long long int var_7 = -1587447700443320350LL;
int zero = 0;
unsigned int var_12 = 1194048592U;
signed char var_13 = (signed char)-115;
unsigned int var_14 = 4149833120U;
int var_15 = 496162162;
long long int var_16 = 5685058437312172940LL;
long long int var_17 = 432036746728395888LL;
int var_18 = -2140311620;
long long int var_19 = -1548782896389640899LL;
int var_20 = 318780503;
int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
long long int arr_2 [23] ;
short arr_3 [23] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -73536459;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)5199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8356832415877913574LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-2059;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -6639387256140680372LL : -390840118207888138LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
