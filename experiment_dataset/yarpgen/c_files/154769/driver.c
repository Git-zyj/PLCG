#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 341159154U;
int var_1 = -195639597;
unsigned int var_2 = 1260240021U;
signed char var_3 = (signed char)62;
int var_5 = -1255509438;
unsigned char var_6 = (unsigned char)78;
unsigned char var_12 = (unsigned char)149;
unsigned char var_18 = (unsigned char)161;
int zero = 0;
long long int var_19 = -7611980897669342557LL;
unsigned char var_20 = (unsigned char)57;
unsigned char var_21 = (unsigned char)178;
short var_22 = (short)-23523;
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
