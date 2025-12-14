#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2017876295U;
signed char var_2 = (signed char)106;
unsigned char var_3 = (unsigned char)173;
unsigned short var_8 = (unsigned short)27915;
unsigned short var_10 = (unsigned short)28487;
unsigned int var_13 = 139689837U;
int zero = 0;
signed char var_17 = (signed char)-35;
unsigned short var_18 = (unsigned short)28409;
unsigned long long int var_19 = 17124277437985127882ULL;
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
