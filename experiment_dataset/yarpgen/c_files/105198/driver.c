#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
long long int var_1 = 4575088258414661747LL;
unsigned char var_2 = (unsigned char)240;
int zero = 0;
short var_11 = (short)-23014;
unsigned short var_12 = (unsigned short)46504;
unsigned long long int var_13 = 16514100049040052075ULL;
unsigned char var_14 = (unsigned char)0;
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
