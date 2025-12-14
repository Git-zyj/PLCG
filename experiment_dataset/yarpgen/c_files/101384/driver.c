#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10020985819506320235ULL;
unsigned int var_10 = 3218754430U;
unsigned long long int var_12 = 15608041935885150050ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
unsigned int var_15 = 2653220852U;
long long int var_16 = 6803147917861654428LL;
long long int var_17 = -525104201731735611LL;
void init() {
}

void checksum() {
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
