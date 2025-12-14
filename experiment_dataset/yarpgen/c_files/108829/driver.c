#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17988;
unsigned int var_2 = 474905904U;
short var_3 = (short)15735;
unsigned long long int var_7 = 7259178271325481218ULL;
short var_8 = (short)-16427;
unsigned long long int var_10 = 14973915448315281767ULL;
unsigned long long int var_11 = 317131535856288370ULL;
int var_12 = 1835878573;
unsigned char var_13 = (unsigned char)253;
int zero = 0;
int var_19 = 1041628261;
_Bool var_20 = (_Bool)0;
int var_21 = -1669941323;
unsigned char var_22 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
