#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned int var_5 = 2337466910U;
short var_7 = (short)-18786;
long long int var_9 = 7576665568293412805LL;
short var_10 = (short)-29857;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1363945602U;
unsigned short var_13 = (unsigned short)64066;
unsigned long long int var_14 = 8121375733316196446ULL;
int zero = 0;
unsigned int var_15 = 4134285020U;
long long int var_16 = 1922669764213115659LL;
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
