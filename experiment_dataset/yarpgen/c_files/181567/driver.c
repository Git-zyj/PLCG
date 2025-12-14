#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1884987311;
short var_11 = (short)3778;
long long int var_14 = -6207887457116695902LL;
unsigned short var_15 = (unsigned short)61820;
int zero = 0;
unsigned char var_16 = (unsigned char)122;
short var_17 = (short)-18190;
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
