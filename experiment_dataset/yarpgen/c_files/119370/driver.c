#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned long long int var_2 = 3959927838547725267ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)12;
unsigned short var_5 = (unsigned short)34146;
signed char var_6 = (signed char)-8;
long long int var_7 = 1488204914672751284LL;
signed char var_8 = (signed char)9;
int var_9 = -275164425;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5534961707514418005LL;
int zero = 0;
short var_13 = (short)-32713;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)77;
unsigned char var_16 = (unsigned char)23;
short var_17 = (short)20284;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
