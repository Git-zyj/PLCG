#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned char var_4 = (unsigned char)149;
unsigned short var_7 = (unsigned short)66;
unsigned short var_9 = (unsigned short)2853;
unsigned int var_10 = 1733581063U;
int var_11 = 1515299037;
unsigned int var_14 = 4000694478U;
int zero = 0;
unsigned short var_15 = (unsigned short)48200;
signed char var_16 = (signed char)102;
unsigned char var_17 = (unsigned char)191;
int var_18 = 1447879238;
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
