#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17688;
unsigned long long int var_8 = 6073140377784510695ULL;
short var_10 = (short)-6842;
int var_11 = -1099204421;
int zero = 0;
int var_14 = -1763481321;
unsigned short var_15 = (unsigned short)13069;
unsigned long long int var_16 = 15390600253004470263ULL;
short var_17 = (short)-20049;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
