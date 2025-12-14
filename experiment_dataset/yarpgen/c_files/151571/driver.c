#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned char var_1 = (unsigned char)223;
unsigned char var_3 = (unsigned char)45;
signed char var_7 = (signed char)-39;
unsigned char var_10 = (unsigned char)116;
int var_11 = -206268625;
unsigned short var_14 = (unsigned short)12856;
int zero = 0;
int var_15 = 2037905451;
short var_16 = (short)-18916;
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
