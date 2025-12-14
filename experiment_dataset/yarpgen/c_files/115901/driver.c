#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1606124611;
unsigned int var_4 = 2427898000U;
signed char var_5 = (signed char)62;
int var_7 = -1796506911;
int var_9 = -158976211;
unsigned int var_10 = 2527718543U;
unsigned int var_13 = 3638845878U;
int var_15 = -2065592998;
int zero = 0;
unsigned int var_18 = 618077629U;
signed char var_19 = (signed char)-100;
int var_20 = -869856535;
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
