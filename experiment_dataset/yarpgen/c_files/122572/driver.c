#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43608;
unsigned short var_1 = (unsigned short)64160;
unsigned short var_3 = (unsigned short)6132;
unsigned short var_4 = (unsigned short)44239;
unsigned char var_6 = (unsigned char)56;
unsigned short var_7 = (unsigned short)23655;
unsigned char var_8 = (unsigned char)159;
int zero = 0;
unsigned char var_12 = (unsigned char)243;
unsigned char var_13 = (unsigned char)199;
unsigned char var_14 = (unsigned char)215;
void init() {
}

void checksum() {
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
