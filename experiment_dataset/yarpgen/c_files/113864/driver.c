#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-64;
short var_9 = (short)-32112;
unsigned long long int var_10 = 10539231728496594766ULL;
unsigned short var_11 = (unsigned short)42961;
int zero = 0;
long long int var_18 = -2563197719558182557LL;
signed char var_19 = (signed char)-117;
unsigned short var_20 = (unsigned short)56186;
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
