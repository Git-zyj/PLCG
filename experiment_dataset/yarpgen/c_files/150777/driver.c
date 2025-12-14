#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-100;
signed char var_4 = (signed char)-46;
unsigned short var_7 = (unsigned short)2479;
unsigned short var_8 = (unsigned short)53010;
int zero = 0;
signed char var_11 = (signed char)73;
long long int var_12 = 8094326094287684519LL;
short var_13 = (short)-1898;
unsigned int var_14 = 2383636109U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
