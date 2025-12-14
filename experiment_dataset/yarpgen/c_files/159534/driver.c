#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18847;
unsigned int var_1 = 2938231593U;
short var_3 = (short)1232;
unsigned char var_5 = (unsigned char)143;
int var_8 = -682640513;
short var_10 = (short)-14179;
unsigned long long int var_13 = 13531976641593380973ULL;
int zero = 0;
int var_20 = 590255328;
long long int var_21 = 493368048508145240LL;
unsigned int var_22 = 3610108039U;
unsigned char var_23 = (unsigned char)78;
short var_24 = (short)-19674;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
