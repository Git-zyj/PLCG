#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14051195960574901164ULL;
short var_2 = (short)-1052;
short var_4 = (short)-20745;
short var_5 = (short)24545;
short var_14 = (short)30245;
unsigned char var_17 = (unsigned char)60;
int zero = 0;
unsigned int var_18 = 2198672408U;
signed char var_19 = (signed char)9;
long long int var_20 = -2793540261843848053LL;
short var_21 = (short)-2377;
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
