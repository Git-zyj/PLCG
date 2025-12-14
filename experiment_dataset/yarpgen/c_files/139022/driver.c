#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15967665430916993377ULL;
unsigned char var_8 = (unsigned char)88;
int zero = 0;
unsigned long long int var_14 = 6627745966337262091ULL;
int var_15 = -1234203292;
unsigned char var_16 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
