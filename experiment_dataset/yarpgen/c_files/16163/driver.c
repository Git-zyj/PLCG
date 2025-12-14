#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20342;
signed char var_1 = (signed char)-62;
int var_10 = 1583166223;
int zero = 0;
unsigned short var_13 = (unsigned short)32396;
unsigned char var_14 = (unsigned char)2;
signed char var_15 = (signed char)80;
unsigned char var_16 = (unsigned char)19;
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
