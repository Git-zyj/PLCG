#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1684664686214381787ULL;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-3868;
unsigned short var_10 = (unsigned short)63616;
unsigned short var_12 = (unsigned short)14046;
unsigned short var_15 = (unsigned short)7488;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1386362445U;
long long int var_18 = -940905847794174094LL;
unsigned short var_19 = (unsigned short)13735;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
