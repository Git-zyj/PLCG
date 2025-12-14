#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42501;
_Bool var_5 = (_Bool)0;
unsigned int var_14 = 2160742385U;
int zero = 0;
short var_15 = (short)-12146;
unsigned char var_16 = (unsigned char)157;
int var_17 = 1628301826;
signed char var_18 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
