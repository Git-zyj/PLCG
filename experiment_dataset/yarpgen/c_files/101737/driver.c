#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_10 = (signed char)69;
unsigned long long int var_11 = 982241137622046346ULL;
int zero = 0;
unsigned int var_13 = 1420884197U;
long long int var_14 = -8482250364852894442LL;
unsigned long long int var_15 = 4871709844624036389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
