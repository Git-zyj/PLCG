#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52913;
unsigned int var_1 = 687570420U;
unsigned int var_4 = 371569455U;
signed char var_5 = (signed char)-83;
short var_6 = (short)-20831;
signed char var_9 = (signed char)-7;
unsigned short var_11 = (unsigned short)43749;
unsigned int var_12 = 2420766881U;
short var_15 = (short)-14582;
int zero = 0;
signed char var_16 = (signed char)-72;
signed char var_17 = (signed char)-117;
unsigned short var_18 = (unsigned short)11405;
signed char var_19 = (signed char)11;
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
