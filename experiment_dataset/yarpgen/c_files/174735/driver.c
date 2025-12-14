#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
unsigned long long int var_2 = 612003682080442725ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)30977;
short var_6 = (short)-6815;
short var_9 = (short)10047;
int zero = 0;
long long int var_10 = 2827767740497114037LL;
unsigned short var_11 = (unsigned short)58658;
unsigned long long int var_12 = 4907927642558437308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
