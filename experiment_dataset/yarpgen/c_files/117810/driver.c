#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7925190879061994062LL;
unsigned long long int var_2 = 15407043632033509058ULL;
int var_3 = -178510574;
long long int var_8 = -5996743149436426580LL;
unsigned short var_10 = (unsigned short)58871;
int zero = 0;
long long int var_16 = 2260945860412362546LL;
long long int var_17 = 8674869530370327806LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6155062142507759835LL;
long long int var_20 = -9008138961192918658LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
