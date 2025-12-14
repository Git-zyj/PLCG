#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4070351746U;
long long int var_10 = 8207028556448883469LL;
unsigned int var_11 = 1665610366U;
int zero = 0;
unsigned short var_16 = (unsigned short)24880;
unsigned int var_17 = 417803924U;
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
