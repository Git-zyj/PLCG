#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_2 = 294988782;
signed char var_5 = (signed char)90;
signed char var_6 = (signed char)80;
int zero = 0;
unsigned char var_10 = (unsigned char)230;
long long int var_11 = -8761434784357342597LL;
unsigned int var_12 = 2061819009U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
