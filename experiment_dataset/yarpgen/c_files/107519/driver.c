#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28393;
unsigned short var_6 = (unsigned short)586;
short var_10 = (short)2838;
int zero = 0;
unsigned long long int var_11 = 1594256912523547519ULL;
unsigned short var_12 = (unsigned short)45124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
