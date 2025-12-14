#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1963084101;
int var_4 = -178372959;
unsigned int var_8 = 140370396U;
unsigned int var_12 = 2939280064U;
int zero = 0;
unsigned int var_16 = 3858043243U;
short var_17 = (short)-23456;
signed char var_18 = (signed char)-51;
short var_19 = (short)6387;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
