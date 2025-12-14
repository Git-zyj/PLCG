#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)110;
long long int var_12 = 7571966618739247203LL;
int zero = 0;
unsigned int var_14 = 3308374479U;
long long int var_15 = -3019686627543973421LL;
unsigned long long int var_16 = 11225145520137963771ULL;
int var_17 = 1962007253;
void init() {
}

void checksum() {
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
