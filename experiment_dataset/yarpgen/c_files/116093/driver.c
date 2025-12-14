#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 141341154U;
unsigned short var_2 = (unsigned short)10412;
unsigned long long int var_5 = 4623644227081601853ULL;
signed char var_6 = (signed char)-49;
signed char var_11 = (signed char)-10;
long long int var_12 = -1223981173445518283LL;
short var_14 = (short)-32526;
int zero = 0;
unsigned long long int var_15 = 16238634625205920090ULL;
unsigned long long int var_16 = 17789165063288569171ULL;
unsigned long long int var_17 = 1161629546108499487ULL;
int var_18 = 630846763;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
