#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-6639;
unsigned char var_12 = (unsigned char)205;
unsigned int var_14 = 1371308016U;
short var_15 = (short)-26208;
int zero = 0;
short var_20 = (short)13209;
unsigned char var_21 = (unsigned char)202;
signed char var_22 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
