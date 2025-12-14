#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2439384075U;
unsigned int var_5 = 3937737629U;
short var_7 = (short)-21818;
short var_10 = (short)-26976;
unsigned long long int var_11 = 1220791670860911528ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)38279;
unsigned short var_16 = (unsigned short)6652;
long long int var_17 = -8736514598453979477LL;
signed char var_18 = (signed char)46;
unsigned int var_19 = 2314035517U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
