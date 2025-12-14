#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7183364495776053962ULL;
int var_1 = -695017987;
int var_2 = 1204983232;
int var_3 = -1645218516;
int var_4 = 1414826646;
signed char var_5 = (signed char)42;
int var_6 = -2065242001;
int var_9 = 13252172;
unsigned long long int var_11 = 8625818842205968597ULL;
unsigned char var_12 = (unsigned char)49;
unsigned long long int var_14 = 14736644794607123606ULL;
int zero = 0;
signed char var_15 = (signed char)-115;
signed char var_16 = (signed char)20;
unsigned char var_17 = (unsigned char)185;
unsigned char var_18 = (unsigned char)165;
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
