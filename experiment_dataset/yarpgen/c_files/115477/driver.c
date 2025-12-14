#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1518602978;
signed char var_7 = (signed char)-117;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)199;
long long int var_14 = 403207676931010805LL;
unsigned int var_15 = 4183853174U;
int zero = 0;
unsigned int var_16 = 3519242698U;
unsigned int var_17 = 89150536U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
