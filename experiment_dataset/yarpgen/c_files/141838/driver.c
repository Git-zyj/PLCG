#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64837;
unsigned short var_6 = (unsigned short)39901;
short var_13 = (short)-20276;
int zero = 0;
int var_16 = 1470897754;
unsigned int var_17 = 1520116336U;
unsigned char var_18 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
