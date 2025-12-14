#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_10 = 294722078;
int var_12 = 708699243;
unsigned long long int var_15 = 18300718352414133867ULL;
int zero = 0;
short var_16 = (short)-8094;
int var_17 = -510438875;
unsigned int var_18 = 2838901741U;
short var_19 = (short)-11205;
short arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-10166 : (short)30911;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
