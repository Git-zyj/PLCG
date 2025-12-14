#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 368665273672504046LL;
unsigned int var_3 = 1005839346U;
unsigned short var_4 = (unsigned short)25773;
unsigned char var_8 = (unsigned char)155;
int var_9 = -2043197288;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8229751083966189833LL;
signed char var_13 = (signed char)36;
int zero = 0;
long long int var_14 = -355911690789013974LL;
int var_15 = -1704181355;
long long int var_16 = -24840625303461263LL;
unsigned long long int var_17 = 4880344926029485552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
