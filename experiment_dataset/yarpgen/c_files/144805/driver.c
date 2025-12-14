#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28398;
int var_11 = 662165419;
unsigned long long int var_14 = 15638813772608928135ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned long long int var_17 = 7208443867348392612ULL;
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
