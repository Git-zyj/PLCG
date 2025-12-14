#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)55;
unsigned short var_5 = (unsigned short)12830;
short var_6 = (short)32240;
unsigned int var_8 = 2691083043U;
signed char var_11 = (signed char)71;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6954021926994235030ULL;
unsigned short var_21 = (unsigned short)13501;
void init() {
}

void checksum() {
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
