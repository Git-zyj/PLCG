#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1413;
_Bool var_4 = (_Bool)1;
short var_8 = (short)7452;
unsigned short var_12 = (unsigned short)40026;
int zero = 0;
unsigned long long int var_13 = 1247316272928508192ULL;
unsigned long long int var_14 = 7075766538299239960ULL;
long long int var_15 = -1869312949495539764LL;
void init() {
}

void checksum() {
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
