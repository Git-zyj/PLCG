#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8699125644949397306ULL;
unsigned char var_1 = (unsigned char)203;
short var_6 = (short)6998;
unsigned long long int var_15 = 5874871768208859692ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
int var_20 = 1948804378;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
