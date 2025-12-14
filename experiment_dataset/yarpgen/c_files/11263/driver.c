#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16709056781384349171ULL;
unsigned long long int var_5 = 6572649183376382296ULL;
unsigned long long int var_6 = 12925672731577386823ULL;
int var_8 = -2039817020;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
unsigned short var_11 = (unsigned short)4663;
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
