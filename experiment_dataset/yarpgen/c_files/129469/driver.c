#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1025679462U;
int var_2 = 822487805;
unsigned int var_9 = 4080105715U;
int var_11 = 2061970206;
long long int var_12 = 968002792761794678LL;
int zero = 0;
short var_15 = (short)-28451;
unsigned int var_16 = 1008841045U;
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
