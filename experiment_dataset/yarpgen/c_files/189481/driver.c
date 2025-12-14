#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 446512026848869827LL;
unsigned char var_5 = (unsigned char)179;
unsigned long long int var_7 = 977660188031586638ULL;
unsigned char var_13 = (unsigned char)124;
int zero = 0;
unsigned int var_19 = 1609645999U;
signed char var_20 = (signed char)46;
unsigned short var_21 = (unsigned short)30497;
void init() {
}

void checksum() {
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
