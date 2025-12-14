#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned char var_3 = (unsigned char)162;
unsigned char var_4 = (unsigned char)158;
long long int var_5 = 1482585320142975033LL;
short var_7 = (short)-32577;
unsigned int var_8 = 3733478164U;
unsigned long long int var_12 = 7965129258123642196ULL;
int zero = 0;
int var_16 = -831378831;
unsigned int var_17 = 3497667962U;
int var_18 = -1317922573;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 849034303U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
