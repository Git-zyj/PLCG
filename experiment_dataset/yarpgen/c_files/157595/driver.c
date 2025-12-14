#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned char var_1 = (unsigned char)78;
unsigned long long int var_2 = 4469165789470797759ULL;
unsigned char var_3 = (unsigned char)170;
long long int var_4 = 2937187085516277218LL;
long long int var_5 = -4757875082081724571LL;
unsigned long long int var_6 = 940650777949759652ULL;
signed char var_7 = (signed char)31;
signed char var_8 = (signed char)122;
unsigned int var_9 = 3930604025U;
unsigned char var_10 = (unsigned char)12;
signed char var_11 = (signed char)3;
unsigned char var_12 = (unsigned char)253;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned int var_14 = 2034026502U;
unsigned int var_15 = 2389983651U;
unsigned int var_16 = 1040641411U;
signed char var_17 = (signed char)37;
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
