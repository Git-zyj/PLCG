#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58124;
unsigned short var_3 = (unsigned short)59929;
unsigned int var_6 = 3207576986U;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
int var_18 = -1881017070;
unsigned short var_19 = (unsigned short)58857;
short var_20 = (short)8075;
signed char var_21 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
