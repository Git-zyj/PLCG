#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-86;
unsigned int var_5 = 1225939824U;
signed char var_7 = (signed char)88;
short var_13 = (short)-8618;
int var_14 = -1465840916;
int zero = 0;
signed char var_17 = (signed char)-17;
signed char var_18 = (signed char)-30;
unsigned short var_19 = (unsigned short)36028;
short var_20 = (short)-23548;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
