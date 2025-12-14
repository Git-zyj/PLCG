#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned char var_2 = (unsigned char)33;
unsigned char var_3 = (unsigned char)25;
unsigned char var_5 = (unsigned char)235;
unsigned long long int var_6 = 4105747775908673433ULL;
int var_7 = -741863578;
int var_8 = 600697881;
int var_10 = -726666378;
int var_11 = -1043280875;
unsigned char var_12 = (unsigned char)212;
unsigned long long int var_14 = 13056400615858241637ULL;
long long int var_15 = -3877970364843709465LL;
unsigned long long int var_16 = 17565696925281488871ULL;
unsigned char var_17 = (unsigned char)21;
int zero = 0;
unsigned long long int var_18 = 10764152834875875794ULL;
int var_19 = 1909827156;
signed char var_20 = (signed char)10;
signed char var_21 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
