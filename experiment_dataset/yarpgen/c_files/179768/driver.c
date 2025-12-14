#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2474901470U;
short var_8 = (short)-30778;
long long int var_13 = -8834561340358802497LL;
int zero = 0;
unsigned short var_16 = (unsigned short)60417;
unsigned char var_17 = (unsigned char)197;
unsigned int var_18 = 3875822703U;
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
