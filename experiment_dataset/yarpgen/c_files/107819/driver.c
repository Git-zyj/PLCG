#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
unsigned long long int var_1 = 14798426558856803533ULL;
short var_2 = (short)29099;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15129614141062561213ULL;
unsigned long long int var_5 = 6898187558647116883ULL;
unsigned long long int var_6 = 4194092804896687372ULL;
unsigned char var_8 = (unsigned char)70;
short var_12 = (short)31504;
int zero = 0;
short var_15 = (short)-14134;
unsigned long long int var_16 = 13742142538971638030ULL;
unsigned long long int var_17 = 77762435123623481ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
