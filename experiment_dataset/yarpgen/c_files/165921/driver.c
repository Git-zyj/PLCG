#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10298;
long long int var_6 = -1170546513675534212LL;
unsigned long long int var_10 = 15965048601655665822ULL;
unsigned long long int var_13 = 14796326426776885210ULL;
int zero = 0;
int var_15 = -58047739;
int var_16 = 691437139;
signed char var_17 = (signed char)-28;
short var_18 = (short)-18561;
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
