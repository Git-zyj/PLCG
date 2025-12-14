#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14641616537884106638ULL;
short var_8 = (short)18767;
long long int var_11 = -3395346276959892640LL;
int zero = 0;
unsigned long long int var_15 = 6022677653838614004ULL;
unsigned int var_16 = 2839366800U;
unsigned long long int var_17 = 14892597382188283816ULL;
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
