#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -753372646;
unsigned char var_1 = (unsigned char)223;
unsigned char var_6 = (unsigned char)75;
unsigned char var_7 = (unsigned char)196;
int zero = 0;
unsigned short var_20 = (unsigned short)35866;
unsigned short var_21 = (unsigned short)9034;
void init() {
}

void checksum() {
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
