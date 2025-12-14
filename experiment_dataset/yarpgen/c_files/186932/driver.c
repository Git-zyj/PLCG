#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30299;
unsigned int var_6 = 906767090U;
unsigned short var_8 = (unsigned short)53520;
unsigned long long int var_10 = 15486496407435439545ULL;
unsigned short var_13 = (unsigned short)41779;
int zero = 0;
unsigned int var_17 = 475145234U;
long long int var_18 = -1511161821102459142LL;
unsigned short var_19 = (unsigned short)42474;
void init() {
}

void checksum() {
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
