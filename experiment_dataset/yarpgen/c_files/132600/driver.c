#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34816;
signed char var_4 = (signed char)-7;
signed char var_17 = (signed char)73;
int zero = 0;
unsigned int var_20 = 1782279515U;
short var_21 = (short)1032;
unsigned char var_22 = (unsigned char)146;
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
