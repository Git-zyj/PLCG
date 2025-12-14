#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1745339318U;
unsigned int var_2 = 2040184459U;
unsigned char var_3 = (unsigned char)35;
unsigned short var_5 = (unsigned short)30573;
unsigned short var_6 = (unsigned short)2691;
signed char var_8 = (signed char)7;
long long int var_9 = 1007265704721940958LL;
unsigned short var_12 = (unsigned short)4434;
int zero = 0;
unsigned int var_13 = 1159240863U;
unsigned int var_14 = 723200970U;
signed char var_15 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
