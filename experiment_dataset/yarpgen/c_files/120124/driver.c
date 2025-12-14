#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40497;
unsigned int var_3 = 2596098457U;
unsigned char var_6 = (unsigned char)154;
unsigned int var_13 = 3105284099U;
int zero = 0;
unsigned char var_15 = (unsigned char)113;
unsigned int var_16 = 1961564145U;
unsigned short var_17 = (unsigned short)45451;
void init() {
}

void checksum() {
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
