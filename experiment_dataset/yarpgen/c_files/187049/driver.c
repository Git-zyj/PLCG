#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned int var_1 = 1439173405U;
signed char var_3 = (signed char)76;
unsigned int var_6 = 932811023U;
signed char var_9 = (signed char)-70;
unsigned char var_10 = (unsigned char)134;
unsigned short var_11 = (unsigned short)52939;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
unsigned int var_14 = 1071023095U;
unsigned short var_15 = (unsigned short)50049;
unsigned char var_16 = (unsigned char)178;
unsigned int var_17 = 3651134096U;
signed char var_18 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
