#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
unsigned char var_3 = (unsigned char)38;
unsigned char var_4 = (unsigned char)226;
unsigned short var_7 = (unsigned short)40550;
unsigned short var_11 = (unsigned short)29405;
unsigned char var_15 = (unsigned char)200;
int zero = 0;
unsigned char var_17 = (unsigned char)210;
unsigned char var_18 = (unsigned char)42;
unsigned char var_19 = (unsigned char)245;
unsigned char var_20 = (unsigned char)210;
unsigned short var_21 = (unsigned short)33310;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
