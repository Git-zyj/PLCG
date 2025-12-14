#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4228114296U;
signed char var_7 = (signed char)84;
unsigned int var_11 = 2389757048U;
short var_13 = (short)-1865;
unsigned long long int var_15 = 6788267188405936342ULL;
short var_17 = (short)-30549;
unsigned long long int var_18 = 16501127611914716964ULL;
int zero = 0;
short var_20 = (short)3892;
short var_21 = (short)-24668;
unsigned long long int var_22 = 6705694254278695290ULL;
unsigned short var_23 = (unsigned short)11758;
unsigned char var_24 = (unsigned char)7;
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
