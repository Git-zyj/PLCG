#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
short var_3 = (short)5308;
unsigned short var_6 = (unsigned short)33960;
short var_8 = (short)4618;
unsigned short var_10 = (unsigned short)41237;
signed char var_11 = (signed char)31;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-8562;
long long int var_14 = 8769286264545343258LL;
unsigned long long int var_15 = 14217250232191420415ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
