#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1983903239;
_Bool var_3 = (_Bool)0;
unsigned long long int var_15 = 14599552255377786438ULL;
int zero = 0;
unsigned int var_16 = 3990900689U;
unsigned int var_17 = 2419724541U;
void init() {
}

void checksum() {
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
