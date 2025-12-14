#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9654;
unsigned short var_5 = (unsigned short)63460;
short var_9 = (short)28289;
int var_10 = -563419802;
unsigned int var_12 = 3141193046U;
unsigned int var_13 = 2263046807U;
unsigned int var_14 = 1615855554U;
int zero = 0;
short var_15 = (short)-7012;
unsigned int var_16 = 1312431660U;
unsigned short var_17 = (unsigned short)59255;
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
