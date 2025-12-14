#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned char var_3 = (unsigned char)139;
unsigned char var_5 = (unsigned char)113;
unsigned char var_8 = (unsigned char)91;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
unsigned char var_11 = (unsigned char)241;
unsigned char var_12 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
