#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-14128;
int var_14 = 1910971721;
unsigned char var_15 = (unsigned char)104;
int zero = 0;
long long int var_16 = 8010629279954508590LL;
long long int var_17 = -5734781015649596384LL;
unsigned char var_18 = (unsigned char)134;
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
