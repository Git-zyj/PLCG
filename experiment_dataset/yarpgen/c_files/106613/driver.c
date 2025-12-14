#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -334403531;
unsigned int var_17 = 3346804924U;
int zero = 0;
short var_18 = (short)16376;
int var_19 = 1637748558;
unsigned long long int var_20 = 3196497892443175390ULL;
short var_21 = (short)-15714;
unsigned char var_22 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
