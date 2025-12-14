#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30575;
short var_5 = (short)-14907;
signed char var_8 = (signed char)104;
signed char var_11 = (signed char)-94;
unsigned int var_12 = 2552987474U;
unsigned int var_15 = 2930884413U;
int var_18 = 127132378;
int zero = 0;
signed char var_19 = (signed char)90;
unsigned short var_20 = (unsigned short)222;
signed char var_21 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
