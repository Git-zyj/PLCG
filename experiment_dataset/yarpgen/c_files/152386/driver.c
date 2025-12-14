#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12814;
unsigned int var_4 = 2648948002U;
unsigned char var_8 = (unsigned char)249;
short var_10 = (short)-8623;
unsigned int var_16 = 300788876U;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
unsigned short var_20 = (unsigned short)38813;
unsigned short var_21 = (unsigned short)46827;
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
