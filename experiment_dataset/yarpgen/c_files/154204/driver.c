#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2351074276470281768ULL;
unsigned char var_3 = (unsigned char)46;
unsigned char var_9 = (unsigned char)107;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
int var_15 = -885154497;
unsigned char var_16 = (unsigned char)70;
unsigned short var_17 = (unsigned short)6627;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
