#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)14404;
unsigned short var_7 = (unsigned short)16960;
unsigned char var_8 = (unsigned char)199;
signed char var_12 = (signed char)42;
int zero = 0;
unsigned long long int var_14 = 17978777694674322167ULL;
unsigned short var_15 = (unsigned short)35301;
unsigned char var_16 = (unsigned char)211;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
