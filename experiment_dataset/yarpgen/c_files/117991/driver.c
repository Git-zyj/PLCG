#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14381694097356380728ULL;
long long int var_4 = 2293242532602274377LL;
unsigned char var_5 = (unsigned char)207;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 2604422268674477154ULL;
long long int var_10 = -7967916253653958043LL;
unsigned long long int var_11 = 10620657426821328515ULL;
int zero = 0;
signed char var_12 = (signed char)-18;
unsigned long long int var_13 = 18129134761906895377ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
