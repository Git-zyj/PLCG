#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
short var_3 = (short)-6011;
int var_9 = 550567032;
unsigned int var_11 = 430402581U;
int zero = 0;
unsigned int var_14 = 2500913150U;
unsigned int var_15 = 2277877387U;
unsigned int var_16 = 3751827313U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
