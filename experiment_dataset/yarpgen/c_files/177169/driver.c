#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 347687416;
unsigned short var_3 = (unsigned short)39661;
unsigned short var_6 = (unsigned short)4027;
int var_10 = 469095847;
int zero = 0;
int var_15 = 774581271;
int var_16 = 2006570408;
short var_17 = (short)-22815;
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
