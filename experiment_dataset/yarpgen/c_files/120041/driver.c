#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27853;
unsigned short var_2 = (unsigned short)5862;
signed char var_6 = (signed char)-6;
unsigned char var_9 = (unsigned char)33;
unsigned char var_10 = (unsigned char)70;
int zero = 0;
int var_11 = -315777984;
short var_12 = (short)-18506;
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
