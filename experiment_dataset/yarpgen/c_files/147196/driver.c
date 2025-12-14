#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7564439211091278189ULL;
unsigned long long int var_4 = 6735948482876105303ULL;
unsigned short var_6 = (unsigned short)54288;
unsigned char var_7 = (unsigned char)201;
unsigned short var_13 = (unsigned short)34530;
int zero = 0;
signed char var_20 = (signed char)-120;
unsigned char var_21 = (unsigned char)209;
void init() {
}

void checksum() {
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
