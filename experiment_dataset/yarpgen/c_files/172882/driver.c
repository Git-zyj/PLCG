#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14740347687059308882ULL;
int var_6 = 1199709173;
int var_7 = -1604199636;
unsigned short var_11 = (unsigned short)55958;
long long int var_14 = 8281094806489520912LL;
int zero = 0;
unsigned long long int var_17 = 6952475026575642528ULL;
short var_18 = (short)27584;
unsigned long long int var_19 = 5170012527928016768ULL;
_Bool var_20 = (_Bool)1;
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
