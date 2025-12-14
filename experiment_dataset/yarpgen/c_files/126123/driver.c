#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1980468883U;
int var_2 = -771519538;
int var_7 = 1230213866;
unsigned short var_9 = (unsigned short)29750;
unsigned int var_12 = 2775606770U;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
unsigned short var_14 = (unsigned short)87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
