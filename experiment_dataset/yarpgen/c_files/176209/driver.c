#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 483649023;
long long int var_3 = 7234465746940000635LL;
int var_4 = -518217930;
unsigned char var_7 = (unsigned char)35;
signed char var_8 = (signed char)111;
unsigned int var_10 = 522119532U;
signed char var_11 = (signed char)-48;
int zero = 0;
unsigned char var_16 = (unsigned char)246;
signed char var_17 = (signed char)-105;
long long int var_18 = -110931886228108003LL;
void init() {
}

void checksum() {
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
