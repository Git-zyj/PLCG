#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2184407517711332308ULL;
short var_3 = (short)-10609;
unsigned char var_5 = (unsigned char)210;
unsigned long long int var_6 = 7116124867448969618ULL;
signed char var_8 = (signed char)19;
unsigned short var_10 = (unsigned short)55039;
short var_12 = (short)27710;
int zero = 0;
long long int var_13 = -4101259475686820928LL;
unsigned char var_14 = (unsigned char)125;
unsigned int var_15 = 2987053852U;
unsigned char var_16 = (unsigned char)45;
unsigned long long int var_17 = 15553925166129502675ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
