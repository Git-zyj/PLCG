#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 959391650;
int var_1 = 162486824;
signed char var_8 = (signed char)-123;
unsigned long long int var_10 = 5760216166775237622ULL;
short var_11 = (short)31148;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 3213572756U;
signed char var_17 = (signed char)13;
int zero = 0;
unsigned short var_18 = (unsigned short)61089;
unsigned short var_19 = (unsigned short)6064;
void init() {
}

void checksum() {
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
