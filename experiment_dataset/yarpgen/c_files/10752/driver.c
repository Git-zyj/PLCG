#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2048592237;
unsigned short var_1 = (unsigned short)29742;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-23004;
unsigned int var_5 = 1337600259U;
unsigned char var_6 = (unsigned char)120;
unsigned long long int var_7 = 4035145038765313172ULL;
unsigned int var_10 = 1704535736U;
signed char var_11 = (signed char)-36;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)5;
int var_14 = 1346418446;
signed char var_15 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
