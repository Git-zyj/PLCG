#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10389240667230424478ULL;
unsigned short var_1 = (unsigned short)41443;
unsigned int var_3 = 2177268952U;
int zero = 0;
long long int var_15 = 6975690054667815535LL;
int var_16 = 1286641485;
void init() {
}

void checksum() {
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
