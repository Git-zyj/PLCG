#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7136129442271008867LL;
signed char var_6 = (signed char)-49;
unsigned long long int var_7 = 11746954379349897003ULL;
long long int var_10 = 8747131058428238355LL;
int zero = 0;
unsigned int var_18 = 3662585515U;
unsigned short var_19 = (unsigned short)39173;
short var_20 = (short)-17342;
void init() {
}

void checksum() {
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
