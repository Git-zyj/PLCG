#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)220;
unsigned short var_6 = (unsigned short)43065;
unsigned int var_7 = 3423652451U;
int var_11 = 1793026878;
signed char var_12 = (signed char)-100;
int zero = 0;
short var_14 = (short)-5149;
unsigned char var_15 = (unsigned char)68;
short var_16 = (short)-10845;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
