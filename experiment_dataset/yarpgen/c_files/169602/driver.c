#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 997956472;
long long int var_8 = 1233953822340409928LL;
int var_12 = 1879031317;
_Bool var_13 = (_Bool)0;
long long int var_16 = -4824094966297348263LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5381565005224189571LL;
void init() {
}

void checksum() {
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
