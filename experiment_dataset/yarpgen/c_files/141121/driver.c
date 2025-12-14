#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
short var_2 = (short)-16101;
unsigned short var_6 = (unsigned short)62293;
unsigned char var_10 = (unsigned char)131;
signed char var_11 = (signed char)-126;
int zero = 0;
unsigned int var_15 = 1449299358U;
short var_16 = (short)-18960;
void init() {
}

void checksum() {
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
