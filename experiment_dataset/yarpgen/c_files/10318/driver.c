#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8981;
unsigned long long int var_3 = 11838798483663213240ULL;
unsigned char var_4 = (unsigned char)243;
signed char var_6 = (signed char)-122;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)70;
int var_9 = -220809909;
int zero = 0;
short var_10 = (short)23164;
int var_11 = 151916239;
unsigned int var_12 = 1616138046U;
int var_13 = 1048818040;
short var_14 = (short)-18141;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
