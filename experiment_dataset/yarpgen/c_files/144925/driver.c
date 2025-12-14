#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2934866644U;
unsigned short var_1 = (unsigned short)11318;
unsigned short var_5 = (unsigned short)13612;
unsigned short var_9 = (unsigned short)18363;
unsigned short var_10 = (unsigned short)21170;
int zero = 0;
short var_11 = (short)29165;
short var_12 = (short)-7173;
long long int var_13 = 929364767019144803LL;
int var_14 = 145611728;
unsigned short var_15 = (unsigned short)23959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
