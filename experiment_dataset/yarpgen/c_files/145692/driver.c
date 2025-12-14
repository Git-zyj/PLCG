#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned char var_10 = (unsigned char)21;
long long int var_11 = 5908262728878473325LL;
unsigned long long int var_15 = 5861641648928706021ULL;
unsigned short var_16 = (unsigned short)44177;
int zero = 0;
short var_19 = (short)-12053;
unsigned int var_20 = 1911235413U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
