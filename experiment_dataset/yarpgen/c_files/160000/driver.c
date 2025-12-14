#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8928572734296022087LL;
unsigned short var_2 = (unsigned short)51428;
signed char var_4 = (signed char)-10;
signed char var_5 = (signed char)-92;
short var_6 = (short)-57;
signed char var_15 = (signed char)-86;
int zero = 0;
unsigned int var_16 = 2373486726U;
unsigned int var_17 = 1637698679U;
void init() {
}

void checksum() {
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
