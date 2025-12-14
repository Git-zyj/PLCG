#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48082;
int var_2 = 1944733861;
unsigned long long int var_4 = 16965071680292956201ULL;
unsigned int var_5 = 789812787U;
unsigned char var_11 = (unsigned char)234;
unsigned short var_14 = (unsigned short)5675;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
unsigned char var_16 = (unsigned char)62;
unsigned int var_17 = 4095539237U;
void init() {
}

void checksum() {
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
