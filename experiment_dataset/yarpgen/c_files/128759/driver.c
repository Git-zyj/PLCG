#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9126;
long long int var_2 = 4000937075684633977LL;
short var_3 = (short)10318;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 13940489022491714420ULL;
int zero = 0;
long long int var_14 = 1861673295196023269LL;
unsigned long long int var_15 = 17884445084039890360ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
