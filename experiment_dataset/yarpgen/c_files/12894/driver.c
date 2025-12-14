#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21474;
unsigned long long int var_6 = 10569871971320643983ULL;
short var_8 = (short)-18491;
short var_10 = (short)14452;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 8207596160070475173LL;
short var_21 = (short)8140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
