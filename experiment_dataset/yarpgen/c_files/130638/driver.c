#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24550;
unsigned int var_4 = 1536399906U;
unsigned char var_6 = (unsigned char)240;
int var_7 = -210075703;
unsigned long long int var_10 = 9974628871785304474ULL;
signed char var_11 = (signed char)94;
long long int var_12 = 8481051639569936313LL;
unsigned char var_13 = (unsigned char)128;
long long int var_14 = -8005753173739674147LL;
unsigned long long int var_15 = 5175688145755639714ULL;
unsigned long long int var_16 = 10231949370520295078ULL;
int var_17 = 1086628064;
int zero = 0;
int var_19 = 628713781;
unsigned char var_20 = (unsigned char)199;
unsigned char var_21 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
