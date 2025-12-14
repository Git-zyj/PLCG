#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48709;
short var_7 = (short)19957;
long long int var_10 = -8812711560585892690LL;
int zero = 0;
short var_12 = (short)-23391;
unsigned short var_13 = (unsigned short)5091;
unsigned short var_14 = (unsigned short)42643;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
