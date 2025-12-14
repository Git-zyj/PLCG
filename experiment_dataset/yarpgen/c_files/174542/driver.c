#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)179;
unsigned char var_7 = (unsigned char)97;
signed char var_8 = (signed char)42;
int zero = 0;
unsigned char var_13 = (unsigned char)33;
short var_14 = (short)-32035;
unsigned short var_15 = (unsigned short)53500;
unsigned short var_16 = (unsigned short)46942;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
