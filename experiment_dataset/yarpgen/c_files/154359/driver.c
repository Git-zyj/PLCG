#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1518219488;
int var_3 = -859184784;
signed char var_5 = (signed char)86;
signed char var_6 = (signed char)-3;
unsigned long long int var_7 = 6097221229896637911ULL;
unsigned int var_8 = 1226893083U;
long long int var_9 = 791879555732508212LL;
unsigned short var_10 = (unsigned short)2004;
int zero = 0;
unsigned char var_11 = (unsigned char)61;
short var_12 = (short)-6493;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
