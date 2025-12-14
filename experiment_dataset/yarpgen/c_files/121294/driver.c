#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned char var_3 = (unsigned char)15;
short var_7 = (short)7818;
unsigned char var_8 = (unsigned char)167;
unsigned char var_10 = (unsigned char)252;
short var_11 = (short)18628;
signed char var_12 = (signed char)-81;
unsigned int var_17 = 3424877310U;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
signed char var_21 = (signed char)-123;
int var_22 = -1400333362;
short var_23 = (short)-12420;
unsigned char var_24 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
