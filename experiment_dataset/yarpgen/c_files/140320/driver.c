#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_11 = 14549386134680903745ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-7808;
int zero = 0;
unsigned int var_15 = 982508414U;
unsigned char var_16 = (unsigned char)191;
unsigned int var_17 = 2313813325U;
int var_18 = 1626651570;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
