#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4572093621130054483LL;
signed char var_2 = (signed char)-101;
unsigned short var_5 = (unsigned short)20210;
int var_10 = -1399448531;
unsigned char var_11 = (unsigned char)157;
unsigned short var_12 = (unsigned short)39378;
short var_16 = (short)20561;
signed char var_17 = (signed char)19;
int zero = 0;
signed char var_20 = (signed char)122;
int var_21 = 956149657;
unsigned int var_22 = 3833445417U;
short var_23 = (short)-1101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
