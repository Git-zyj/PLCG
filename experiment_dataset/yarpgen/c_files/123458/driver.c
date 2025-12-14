#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2934732706705767246LL;
short var_1 = (short)7334;
unsigned int var_5 = 318821147U;
int var_14 = -1728711928;
int zero = 0;
unsigned char var_17 = (unsigned char)223;
unsigned long long int var_18 = 10343515458088819578ULL;
void init() {
}

void checksum() {
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
