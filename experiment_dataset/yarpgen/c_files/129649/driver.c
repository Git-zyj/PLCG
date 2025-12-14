#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26399;
unsigned short var_3 = (unsigned short)299;
int var_5 = 2011491728;
int var_7 = -1841791508;
int zero = 0;
unsigned short var_10 = (unsigned short)32324;
unsigned char var_11 = (unsigned char)232;
signed char var_12 = (signed char)6;
int var_13 = 28550526;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
