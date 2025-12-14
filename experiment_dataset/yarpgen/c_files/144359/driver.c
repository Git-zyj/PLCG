#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8214577773380465565ULL;
unsigned int var_1 = 2096833818U;
long long int var_2 = -9101261850691087679LL;
short var_4 = (short)-20147;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)9722;
int zero = 0;
long long int var_12 = -534365549410400725LL;
long long int var_13 = 7072292848061576898LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
