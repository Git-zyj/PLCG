#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1010020107;
unsigned short var_2 = (unsigned short)20137;
short var_3 = (short)-26774;
unsigned long long int var_5 = 13257900342611992181ULL;
signed char var_7 = (signed char)90;
short var_9 = (short)-19341;
int zero = 0;
unsigned char var_10 = (unsigned char)10;
unsigned int var_11 = 3770695256U;
short var_12 = (short)30914;
int var_13 = 1796421626;
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
