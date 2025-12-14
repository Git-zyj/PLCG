#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55166;
unsigned short var_9 = (unsigned short)46954;
unsigned int var_10 = 1120085919U;
int zero = 0;
unsigned long long int var_14 = 15415602712529599939ULL;
unsigned long long int var_15 = 11594547674297770982ULL;
unsigned int var_16 = 2143247776U;
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
