#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19122;
short var_5 = (short)6550;
unsigned short var_7 = (unsigned short)21433;
unsigned char var_8 = (unsigned char)6;
int zero = 0;
short var_11 = (short)18771;
signed char var_12 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
