#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6046169172755987338LL;
signed char var_12 = (signed char)-96;
signed char var_15 = (signed char)9;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)29;
unsigned int var_18 = 2289150693U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
