#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 2439378703167727223ULL;
unsigned long long int var_14 = 1431405125380611725ULL;
unsigned long long int var_15 = 1305118224786592777ULL;
int zero = 0;
int var_16 = -1513273700;
short var_17 = (short)-24502;
long long int var_18 = 3309814167773647965LL;
void init() {
}

void checksum() {
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
