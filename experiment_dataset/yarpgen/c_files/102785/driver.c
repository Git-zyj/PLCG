#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13680637616225828173ULL;
_Bool var_3 = (_Bool)1;
int var_5 = 489932606;
signed char var_6 = (signed char)95;
unsigned int var_7 = 1506204316U;
unsigned short var_11 = (unsigned short)42483;
unsigned long long int var_13 = 3614581498198154505ULL;
unsigned long long int var_14 = 8928544574484576182ULL;
unsigned long long int var_16 = 6519410000704378925ULL;
int var_17 = 1700922564;
int zero = 0;
unsigned int var_20 = 2572725534U;
unsigned short var_21 = (unsigned short)63927;
short var_22 = (short)21048;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
