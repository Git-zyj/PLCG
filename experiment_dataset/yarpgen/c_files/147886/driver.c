#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15648704164763818638ULL;
unsigned short var_5 = (unsigned short)4600;
signed char var_8 = (signed char)76;
unsigned char var_10 = (unsigned char)115;
unsigned short var_11 = (unsigned short)20621;
unsigned short var_13 = (unsigned short)27893;
int var_14 = -972317570;
unsigned int var_15 = 3326642834U;
long long int var_17 = 3791062669086334740LL;
int zero = 0;
int var_19 = -2120820964;
short var_20 = (short)-22261;
int var_21 = -271170298;
long long int var_22 = -5188609918194655966LL;
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
