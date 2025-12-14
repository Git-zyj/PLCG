#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)45;
unsigned int var_7 = 387961308U;
int zero = 0;
unsigned char var_12 = (unsigned char)252;
unsigned short var_13 = (unsigned short)63518;
unsigned int var_14 = 632386445U;
void init() {
}

void checksum() {
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
