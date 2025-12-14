#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)122;
unsigned long long int var_5 = 9749598668371704760ULL;
int var_6 = -1420876156;
unsigned char var_7 = (unsigned char)10;
int var_8 = 1357870507;
unsigned char var_11 = (unsigned char)61;
int var_13 = -184655824;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
signed char var_18 = (signed char)-44;
unsigned char var_19 = (unsigned char)181;
unsigned int var_20 = 33780558U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
