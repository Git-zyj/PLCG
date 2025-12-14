#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21386;
signed char var_4 = (signed char)-67;
signed char var_8 = (signed char)-87;
long long int var_11 = -2307487493839608829LL;
int var_13 = -124389179;
unsigned long long int var_14 = 16789782938407433004ULL;
unsigned char var_15 = (unsigned char)64;
int var_16 = -460676674;
int zero = 0;
unsigned long long int var_18 = 13115656987423026617ULL;
signed char var_19 = (signed char)122;
unsigned long long int var_20 = 18322360729209363004ULL;
unsigned int var_21 = 3798199052U;
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
