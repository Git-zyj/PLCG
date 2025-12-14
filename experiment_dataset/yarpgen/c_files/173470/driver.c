#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned short var_1 = (unsigned short)51620;
signed char var_3 = (signed char)112;
short var_6 = (short)-23044;
unsigned int var_7 = 3066851593U;
unsigned short var_14 = (unsigned short)29227;
signed char var_15 = (signed char)39;
unsigned short var_16 = (unsigned short)6642;
unsigned short var_18 = (unsigned short)64461;
unsigned long long int var_19 = 5886260587674582020ULL;
int zero = 0;
int var_20 = 286143397;
long long int var_21 = -6277339602667728849LL;
signed char var_22 = (signed char)-42;
void init() {
}

void checksum() {
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
