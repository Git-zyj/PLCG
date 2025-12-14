#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3392046305U;
unsigned int var_10 = 3093838622U;
short var_11 = (short)-5770;
short var_12 = (short)-16909;
int var_13 = -514016474;
long long int var_15 = -6289303101718451937LL;
int zero = 0;
short var_16 = (short)-17438;
short var_17 = (short)6943;
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
