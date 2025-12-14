#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13821631730668273813ULL;
unsigned char var_2 = (unsigned char)134;
int var_6 = 760457724;
int var_7 = 282685354;
signed char var_10 = (signed char)109;
int zero = 0;
long long int var_12 = 9074419940302114790LL;
short var_13 = (short)29699;
int var_14 = -310009645;
short var_15 = (short)-8722;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
