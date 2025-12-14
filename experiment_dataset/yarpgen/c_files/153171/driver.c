#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2091967551U;
short var_1 = (short)-4840;
unsigned short var_3 = (unsigned short)56989;
unsigned char var_4 = (unsigned char)14;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6457752454262818343ULL;
unsigned char var_10 = (unsigned char)105;
unsigned short var_13 = (unsigned short)37540;
int zero = 0;
unsigned long long int var_14 = 11038683424486564661ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3275442483U;
void init() {
}

void checksum() {
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
