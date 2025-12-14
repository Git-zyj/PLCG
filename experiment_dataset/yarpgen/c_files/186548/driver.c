#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 498705452127443136ULL;
signed char var_6 = (signed char)81;
unsigned char var_15 = (unsigned char)200;
unsigned char var_18 = (unsigned char)47;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-9116;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1519379474379731645ULL;
unsigned short var_23 = (unsigned short)1562;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
