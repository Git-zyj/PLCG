#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2669312234U;
signed char var_2 = (signed char)-24;
unsigned long long int var_3 = 8567233965692240292ULL;
unsigned int var_4 = 4099787030U;
short var_5 = (short)30274;
short var_8 = (short)10356;
unsigned int var_9 = 3819539106U;
signed char var_12 = (signed char)126;
int zero = 0;
short var_13 = (short)-18848;
unsigned char var_14 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
