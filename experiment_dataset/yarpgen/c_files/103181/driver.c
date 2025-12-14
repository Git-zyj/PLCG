#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2334241895U;
_Bool var_4 = (_Bool)1;
long long int var_8 = 4173679299673171559LL;
int zero = 0;
int var_15 = 1769451414;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 18325487873445892101ULL;
unsigned long long int var_18 = 12096194963061607615ULL;
long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned short arr_2 [13] [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7624634118393969790LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 10535850551319941730ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35014 : (unsigned short)59044;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)2023 : (short)-13205;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
