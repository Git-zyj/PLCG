#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1439956123097055029LL;
unsigned short var_2 = (unsigned short)15575;
unsigned long long int var_3 = 1725753899563827661ULL;
signed char var_5 = (signed char)59;
int zero = 0;
short var_16 = (short)-28884;
long long int var_17 = 5529094466902097475LL;
void init() {
}

void checksum() {
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
