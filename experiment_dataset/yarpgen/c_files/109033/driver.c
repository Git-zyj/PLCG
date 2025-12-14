#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
unsigned char var_4 = (unsigned char)230;
signed char var_6 = (signed char)80;
unsigned short var_7 = (unsigned short)40832;
unsigned char var_8 = (unsigned char)167;
short var_10 = (short)-31137;
int zero = 0;
unsigned int var_11 = 2357696556U;
unsigned short var_12 = (unsigned short)24621;
signed char var_13 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
