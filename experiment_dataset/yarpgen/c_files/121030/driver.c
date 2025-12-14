#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1099539783;
long long int var_3 = -7696653133378328898LL;
signed char var_4 = (signed char)112;
unsigned long long int var_5 = 5840836684992948456ULL;
int var_8 = 1957997804;
unsigned int var_9 = 3755963780U;
short var_10 = (short)21916;
unsigned short var_11 = (unsigned short)39378;
_Bool var_12 = (_Bool)1;
unsigned short var_16 = (unsigned short)33730;
int zero = 0;
long long int var_18 = 4555181697311959635LL;
long long int var_19 = -1862098845796512492LL;
short var_20 = (short)-8777;
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
