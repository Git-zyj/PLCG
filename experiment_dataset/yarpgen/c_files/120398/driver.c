#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56960;
signed char var_7 = (signed char)28;
short var_9 = (short)-19343;
long long int var_10 = -382050521121175690LL;
signed char var_11 = (signed char)54;
long long int var_12 = -7974961003933211798LL;
unsigned int var_13 = 2989362509U;
int zero = 0;
int var_14 = -707439176;
unsigned short var_15 = (unsigned short)18667;
short var_16 = (short)-30231;
unsigned char var_17 = (unsigned char)165;
short var_18 = (short)27678;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
