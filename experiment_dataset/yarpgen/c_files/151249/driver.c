#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 35629923;
short var_2 = (short)-23022;
unsigned int var_5 = 3291385446U;
unsigned int var_6 = 3875139499U;
signed char var_7 = (signed char)-68;
int var_8 = 793300174;
unsigned int var_10 = 1942021663U;
signed char var_11 = (signed char)-126;
signed char var_12 = (signed char)0;
int zero = 0;
unsigned int var_13 = 765525014U;
unsigned short var_14 = (unsigned short)51434;
short var_15 = (short)-18473;
unsigned char var_16 = (unsigned char)118;
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
