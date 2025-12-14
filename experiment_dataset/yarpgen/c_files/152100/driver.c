#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)737;
unsigned char var_2 = (unsigned char)58;
unsigned int var_5 = 511911256U;
short var_6 = (short)-12951;
short var_8 = (short)-4155;
int zero = 0;
signed char var_11 = (signed char)-8;
short var_12 = (short)-12473;
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
