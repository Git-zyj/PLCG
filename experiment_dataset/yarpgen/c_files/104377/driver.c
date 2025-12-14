#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 967933971U;
unsigned char var_2 = (unsigned char)173;
signed char var_4 = (signed char)-47;
long long int var_5 = 6473914726738227524LL;
signed char var_6 = (signed char)-78;
long long int var_10 = -17651838151022392LL;
signed char var_13 = (signed char)-32;
unsigned int var_15 = 2329133119U;
int zero = 0;
signed char var_19 = (signed char)8;
int var_20 = -1431930783;
unsigned long long int var_21 = 1106674304298700941ULL;
signed char var_22 = (signed char)-111;
short var_23 = (short)-3437;
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
