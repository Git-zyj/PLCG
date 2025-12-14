#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)218;
unsigned char var_7 = (unsigned char)198;
unsigned char var_10 = (unsigned char)84;
unsigned char var_12 = (unsigned char)33;
unsigned char var_14 = (unsigned char)36;
unsigned char var_17 = (unsigned char)42;
int zero = 0;
unsigned char var_19 = (unsigned char)247;
unsigned char var_20 = (unsigned char)164;
unsigned char var_21 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
