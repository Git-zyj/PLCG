#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1252931219;
unsigned long long int var_7 = 4398743848103951855ULL;
unsigned short var_10 = (unsigned short)7483;
_Bool var_11 = (_Bool)1;
short var_18 = (short)-9818;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned short var_21 = (unsigned short)48512;
unsigned int var_22 = 1802865756U;
_Bool var_23 = (_Bool)0;
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
