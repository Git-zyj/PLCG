#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1966047341;
unsigned int var_1 = 2450477011U;
unsigned int var_6 = 3014321268U;
int var_7 = 2021395164;
int var_8 = 191343693;
unsigned int var_9 = 3211854041U;
unsigned short var_10 = (unsigned short)9040;
int zero = 0;
unsigned int var_14 = 3210770712U;
short var_15 = (short)4426;
unsigned int var_16 = 3676604960U;
signed char var_17 = (signed char)9;
_Bool arr_0 [22] ;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)50912;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
