#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2321809186218276332ULL;
short var_3 = (short)-19660;
int var_6 = -1086991099;
int zero = 0;
unsigned long long int var_16 = 9924183379711611962ULL;
long long int var_17 = -2401662737605184877LL;
int var_18 = 90873022;
unsigned long long int var_19 = 14694406327758387730ULL;
signed char var_20 = (signed char)61;
void init() {
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
