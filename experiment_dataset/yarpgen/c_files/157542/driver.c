#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7207608888723100885LL;
long long int var_2 = 2862385075832305864LL;
long long int var_5 = -8701053002773827468LL;
short var_7 = (short)-7721;
short var_9 = (short)-16250;
unsigned long long int var_12 = 14462838865962744161ULL;
long long int var_13 = 2660257646454723924LL;
int zero = 0;
short var_15 = (short)21079;
short var_16 = (short)9110;
unsigned short var_17 = (unsigned short)9704;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
