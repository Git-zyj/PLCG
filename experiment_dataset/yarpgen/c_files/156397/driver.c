#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2273238101U;
signed char var_10 = (signed char)-6;
signed char var_12 = (signed char)106;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_20 = -213187519;
signed char var_21 = (signed char)33;
unsigned int var_22 = 1959080928U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
