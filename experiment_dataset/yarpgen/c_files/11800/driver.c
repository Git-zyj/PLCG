#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7669743368016118915LL;
int var_4 = 1951796503;
int var_9 = -1917016723;
unsigned short var_10 = (unsigned short)48731;
int var_12 = -1682133770;
unsigned int var_13 = 2958932330U;
int zero = 0;
unsigned long long int var_17 = 6728612391596758379ULL;
unsigned char var_18 = (unsigned char)53;
void init() {
}

void checksum() {
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
