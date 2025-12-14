#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1645016672;
unsigned short var_9 = (unsigned short)53367;
unsigned short var_11 = (unsigned short)2017;
short var_12 = (short)18498;
unsigned int var_13 = 3164230269U;
int zero = 0;
unsigned long long int var_14 = 12310452899597828852ULL;
int var_15 = -1581965570;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
