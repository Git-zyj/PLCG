#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24201;
unsigned short var_6 = (unsigned short)42727;
short var_9 = (short)-22166;
long long int var_10 = -7216261013778965926LL;
long long int var_11 = -1721871817078034572LL;
int zero = 0;
unsigned int var_15 = 4218286545U;
unsigned char var_16 = (unsigned char)212;
void init() {
}

void checksum() {
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
