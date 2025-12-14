#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
unsigned int var_9 = 469623769U;
unsigned int var_10 = 1371687622U;
short var_12 = (short)-4284;
int var_14 = 1542579045;
int zero = 0;
short var_16 = (short)20772;
long long int var_17 = 316154434528864257LL;
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
