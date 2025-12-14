#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)33;
unsigned char var_15 = (unsigned char)243;
unsigned char var_16 = (unsigned char)148;
unsigned char var_17 = (unsigned char)197;
int zero = 0;
unsigned char var_18 = (unsigned char)168;
unsigned char var_19 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
