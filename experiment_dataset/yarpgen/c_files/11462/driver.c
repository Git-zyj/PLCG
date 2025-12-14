#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18084047691230196374ULL;
short var_2 = (short)24810;
unsigned int var_9 = 3163200283U;
unsigned int var_10 = 1412312269U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3299879639U;
int zero = 0;
unsigned short var_14 = (unsigned short)303;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
