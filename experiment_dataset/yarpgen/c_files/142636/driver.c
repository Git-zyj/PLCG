#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2978;
unsigned int var_3 = 863627295U;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_8 = 13295379942515681530ULL;
unsigned short var_10 = (unsigned short)34685;
short var_12 = (short)-20348;
int zero = 0;
short var_16 = (short)-28350;
short var_17 = (short)23970;
void init() {
}

void checksum() {
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
