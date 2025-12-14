#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
unsigned int var_3 = 1665060865U;
signed char var_4 = (signed char)-94;
short var_6 = (short)4566;
signed char var_10 = (signed char)127;
unsigned short var_11 = (unsigned short)58612;
int zero = 0;
signed char var_14 = (signed char)49;
unsigned short var_15 = (unsigned short)9995;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
