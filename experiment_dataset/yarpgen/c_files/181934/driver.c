#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45082;
unsigned short var_9 = (unsigned short)61729;
unsigned long long int var_13 = 1411398114111890351ULL;
unsigned int var_14 = 3818520951U;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
int var_16 = 1418468323;
short var_17 = (short)27243;
_Bool var_18 = (_Bool)0;
short var_19 = (short)15229;
short var_20 = (short)-20776;
int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 18894220;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
