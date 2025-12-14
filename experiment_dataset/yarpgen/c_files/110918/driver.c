#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2561013355U;
signed char var_4 = (signed char)-50;
unsigned int var_10 = 1192990468U;
unsigned int var_11 = 1337434061U;
short var_13 = (short)22579;
int zero = 0;
short var_16 = (short)-2248;
signed char var_17 = (signed char)-115;
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
