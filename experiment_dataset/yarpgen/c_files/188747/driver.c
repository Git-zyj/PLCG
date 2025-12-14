#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-32048;
signed char var_10 = (signed char)-81;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)35;
unsigned int var_16 = 3335441599U;
unsigned long long int var_17 = 1609195935444978779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
