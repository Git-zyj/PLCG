#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned short var_2 = (unsigned short)23942;
unsigned short var_5 = (unsigned short)10534;
short var_6 = (short)-20888;
unsigned int var_8 = 2291810343U;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
short var_11 = (short)21484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
