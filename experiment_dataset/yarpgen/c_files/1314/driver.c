#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22496;
short var_4 = (short)-14255;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-4674;
_Bool var_14 = (_Bool)1;
short var_15 = (short)17425;
unsigned short var_16 = (unsigned short)44152;
int arr_0 [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -62303753;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)9670;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
