#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
long long int var_2 = 2056242429430629271LL;
long long int var_3 = 1794218048066433928LL;
long long int var_6 = 7789774143247425325LL;
long long int var_7 = -8599144794318200643LL;
unsigned long long int var_10 = 11277328300903731261ULL;
int zero = 0;
unsigned long long int var_14 = 4757449642249405656ULL;
long long int var_15 = 2517075951513905106LL;
unsigned long long int var_16 = 14714830882915219347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
