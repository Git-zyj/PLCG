#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)48;
signed char var_10 = (signed char)29;
signed char var_11 = (signed char)-65;
int zero = 0;
unsigned int var_12 = 2984554697U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-36;
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
