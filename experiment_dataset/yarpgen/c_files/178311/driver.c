#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2032546037738372908ULL;
unsigned short var_5 = (unsigned short)45869;
signed char var_7 = (signed char)123;
unsigned char var_8 = (unsigned char)173;
unsigned long long int var_10 = 711613453045427158ULL;
int zero = 0;
long long int var_11 = 8933835294636773610LL;
unsigned char var_12 = (unsigned char)243;
int var_13 = 1977701187;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
