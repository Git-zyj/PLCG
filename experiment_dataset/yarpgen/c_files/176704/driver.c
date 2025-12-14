#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2142757881U;
signed char var_12 = (signed char)86;
int zero = 0;
unsigned short var_19 = (unsigned short)53343;
unsigned long long int var_20 = 14317664348155289253ULL;
unsigned long long int var_21 = 16930670176359348401ULL;
unsigned long long int var_22 = 1139015189337269179ULL;
unsigned int var_23 = 3308238405U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
