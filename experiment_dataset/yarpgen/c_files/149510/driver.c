#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15898;
unsigned short var_1 = (unsigned short)7593;
short var_15 = (short)30506;
unsigned char var_17 = (unsigned char)225;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
unsigned long long int var_20 = 10438259993648241543ULL;
unsigned short var_21 = (unsigned short)28558;
unsigned int var_22 = 4051493973U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
