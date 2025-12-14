#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10610;
unsigned int var_9 = 2396137794U;
long long int var_10 = 2930865158479963537LL;
unsigned long long int var_11 = 11287850247140257196ULL;
int var_14 = 1823307452;
int zero = 0;
signed char var_15 = (signed char)12;
short var_16 = (short)-26366;
void init() {
}

void checksum() {
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
