#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
short var_2 = (short)-15115;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 1082609392U;
unsigned short var_11 = (unsigned short)11059;
unsigned int var_12 = 1939305499U;
int zero = 0;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)33;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 86367271U;
unsigned int var_17 = 833859497U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
