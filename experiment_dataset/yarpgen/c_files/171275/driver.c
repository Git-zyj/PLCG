#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18074;
short var_6 = (short)-16075;
short var_11 = (short)24643;
unsigned char var_16 = (unsigned char)141;
int zero = 0;
unsigned short var_19 = (unsigned short)5748;
int var_20 = 867172232;
unsigned long long int var_21 = 13215596206050729409ULL;
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
