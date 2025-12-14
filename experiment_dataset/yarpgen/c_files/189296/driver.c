#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1397151494;
long long int var_3 = -6397783339400780338LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 9958176469468397249ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)30249;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
