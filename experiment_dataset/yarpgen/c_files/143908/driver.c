#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -584404235;
unsigned int var_2 = 2639177213U;
unsigned long long int var_4 = 8346409714812461788ULL;
unsigned short var_5 = (unsigned short)28602;
unsigned int var_6 = 2534813899U;
signed char var_9 = (signed char)-99;
signed char var_10 = (signed char)88;
unsigned short var_11 = (unsigned short)14811;
int var_12 = -836178011;
unsigned long long int var_13 = 7597759843887544521ULL;
unsigned short var_14 = (unsigned short)46905;
int zero = 0;
unsigned long long int var_16 = 15170011978663385180ULL;
short var_17 = (short)-11167;
signed char var_18 = (signed char)62;
unsigned int var_19 = 1806493674U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
