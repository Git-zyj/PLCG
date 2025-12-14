#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8051278719355524198LL;
unsigned short var_5 = (unsigned short)3127;
unsigned int var_6 = 1583520843U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 607532883U;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-15356;
short var_19 = (short)-29145;
short var_20 = (short)28083;
unsigned long long int var_21 = 5173698622095296035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
