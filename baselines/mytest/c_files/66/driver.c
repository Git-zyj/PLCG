#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
long long int var_8 = -3340881985048366597LL;
long long int var_12 = 8573699366697181163LL;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
unsigned short var_20 = (unsigned short)19535;
short var_21 = (short)-21338;
unsigned int var_22 = 1989582077U;
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
