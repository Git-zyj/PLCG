#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18137;
short var_2 = (short)-20390;
unsigned char var_4 = (unsigned char)29;
long long int var_7 = -6332484158423226061LL;
int zero = 0;
unsigned short var_15 = (unsigned short)48965;
unsigned int var_16 = 462793568U;
short var_17 = (short)4677;
unsigned char var_18 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
