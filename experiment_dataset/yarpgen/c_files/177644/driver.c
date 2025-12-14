#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned char var_3 = (unsigned char)31;
int var_5 = -2023258463;
unsigned char var_6 = (unsigned char)190;
unsigned long long int var_10 = 4115544609608957571ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1359135552;
unsigned char var_13 = (unsigned char)87;
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
