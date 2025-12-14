#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned long long int var_2 = 14464827680876429798ULL;
unsigned int var_7 = 2252061519U;
unsigned long long int var_10 = 6219808639684627014ULL;
int var_13 = -1345864620;
int var_14 = -2076052398;
int zero = 0;
long long int var_15 = 4387616266746090734LL;
unsigned char var_16 = (unsigned char)218;
unsigned short var_17 = (unsigned short)6755;
signed char var_18 = (signed char)103;
short var_19 = (short)-30292;
unsigned long long int var_20 = 15757467122585349207ULL;
int var_21 = 1604514367;
int var_22 = -1465263009;
unsigned short var_23 = (unsigned short)26589;
unsigned short var_24 = (unsigned short)57069;
_Bool var_25 = (_Bool)1;
unsigned int arr_13 [13] ;
unsigned int arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 2069107801U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 3257404670U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
