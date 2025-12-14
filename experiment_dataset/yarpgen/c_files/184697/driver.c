#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_8 = 627386223;
int var_9 = -1212418795;
unsigned char var_11 = (unsigned char)243;
signed char var_16 = (signed char)91;
int zero = 0;
unsigned int var_18 = 4178506699U;
int var_19 = -670850383;
int var_20 = -1660437570;
int var_21 = 2074113402;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
