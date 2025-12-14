#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1026452635;
unsigned short var_2 = (unsigned short)6965;
short var_5 = (short)17553;
int var_7 = 188993270;
unsigned int var_8 = 221524140U;
unsigned short var_10 = (unsigned short)12199;
long long int var_14 = -5673863918163608810LL;
int zero = 0;
unsigned long long int var_16 = 6656025015184866171ULL;
int var_17 = 1175804488;
unsigned char var_18 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
