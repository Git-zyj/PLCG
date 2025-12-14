#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1262679131;
unsigned long long int var_12 = 15243936642633248790ULL;
unsigned int var_14 = 53051639U;
int zero = 0;
unsigned int var_16 = 1998665702U;
unsigned long long int var_17 = 1006956364756987384ULL;
int var_18 = 1879738152;
void init() {
}

void checksum() {
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
