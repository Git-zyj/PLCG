#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7297;
unsigned int var_3 = 2393406571U;
signed char var_4 = (signed char)-87;
unsigned char var_14 = (unsigned char)97;
int zero = 0;
unsigned char var_15 = (unsigned char)5;
short var_16 = (short)-16690;
short var_17 = (short)10627;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
