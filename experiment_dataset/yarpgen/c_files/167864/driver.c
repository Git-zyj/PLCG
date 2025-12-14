#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -265053640;
short var_1 = (short)-32071;
unsigned int var_5 = 1416437615U;
unsigned long long int var_7 = 16912290208967489925ULL;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
long long int var_17 = 8284477443657262757LL;
short var_18 = (short)-11580;
short var_19 = (short)286;
void init() {
}

void checksum() {
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
