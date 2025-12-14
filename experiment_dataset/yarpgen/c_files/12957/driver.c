#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2425125645U;
long long int var_13 = -4370255986449380477LL;
int zero = 0;
unsigned long long int var_15 = 3490134683496940496ULL;
unsigned int var_16 = 830459942U;
long long int var_17 = -6357940249188133703LL;
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
