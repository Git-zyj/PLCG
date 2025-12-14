#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1416725740U;
int var_3 = -338928044;
short var_10 = (short)12413;
unsigned long long int var_12 = 13966859460239879608ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)244;
short var_14 = (short)-6741;
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
