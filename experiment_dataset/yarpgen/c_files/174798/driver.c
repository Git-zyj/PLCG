#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)56;
unsigned char var_4 = (unsigned char)109;
unsigned char var_7 = (unsigned char)42;
unsigned char var_9 = (unsigned char)43;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
int var_13 = 1433551870;
void init() {
}

void checksum() {
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
