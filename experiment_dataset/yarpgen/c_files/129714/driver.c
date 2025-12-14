#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1671318122U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8900991619149159812ULL;
long long int var_10 = -3436878858246929109LL;
long long int var_12 = -8451749024380920872LL;
unsigned long long int var_13 = 13457683816679875065ULL;
unsigned long long int var_17 = 18129041922843684820ULL;
int zero = 0;
signed char var_18 = (signed char)123;
signed char var_19 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
