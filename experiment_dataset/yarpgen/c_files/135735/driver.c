#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 8537189093673336522LL;
unsigned short var_9 = (unsigned short)62898;
unsigned char var_10 = (unsigned char)144;
unsigned short var_13 = (unsigned short)50488;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)196;
unsigned long long int var_19 = 15747502949230910779ULL;
short var_20 = (short)5444;
void init() {
}

void checksum() {
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
