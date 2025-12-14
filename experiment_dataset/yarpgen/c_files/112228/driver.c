#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16528;
unsigned int var_8 = 411742986U;
unsigned long long int var_9 = 7743177213897062039ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
unsigned int var_14 = 2197648734U;
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
