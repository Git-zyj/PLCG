#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 362506090U;
short var_4 = (short)22855;
signed char var_6 = (signed char)42;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3859621294U;
unsigned short var_17 = (unsigned short)41964;
unsigned int var_18 = 72906952U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
