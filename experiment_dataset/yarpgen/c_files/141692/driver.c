#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
unsigned char var_2 = (unsigned char)186;
unsigned short var_3 = (unsigned short)41464;
unsigned short var_5 = (unsigned short)11631;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
unsigned short var_15 = (unsigned short)38221;
unsigned long long int var_16 = 4192815762243045624ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
