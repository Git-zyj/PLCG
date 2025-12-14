#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
long long int var_13 = -8076931309247467355LL;
int var_15 = -1639342977;
int zero = 0;
unsigned int var_16 = 3489480942U;
unsigned long long int var_17 = 7691254653190271809ULL;
unsigned int var_18 = 224901035U;
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
