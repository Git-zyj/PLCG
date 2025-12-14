#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
signed char var_1 = (signed char)113;
int var_2 = -23752075;
unsigned int var_3 = 3352758971U;
unsigned char var_4 = (unsigned char)194;
signed char var_5 = (signed char)35;
unsigned int var_6 = 2096937021U;
unsigned int var_7 = 4107668254U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)134;
unsigned int var_12 = 2713542796U;
unsigned long long int var_13 = 15663640815001554485ULL;
unsigned short var_14 = (unsigned short)63269;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
