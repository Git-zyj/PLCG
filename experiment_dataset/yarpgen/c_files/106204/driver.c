#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)23;
unsigned char var_6 = (unsigned char)66;
unsigned short var_11 = (unsigned short)65098;
int var_12 = 580474913;
int zero = 0;
short var_13 = (short)-13051;
unsigned char var_14 = (unsigned char)196;
unsigned char var_15 = (unsigned char)248;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
