#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 479862565;
int var_5 = 549429764;
int var_9 = 115572256;
int zero = 0;
signed char var_11 = (signed char)113;
unsigned short var_12 = (unsigned short)2014;
unsigned char var_13 = (unsigned char)239;
unsigned short var_14 = (unsigned short)17136;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
