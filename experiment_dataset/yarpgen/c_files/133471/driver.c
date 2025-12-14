#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
_Bool var_4 = (_Bool)1;
long long int var_10 = 2689566072270483129LL;
signed char var_13 = (signed char)28;
signed char var_14 = (signed char)63;
unsigned long long int var_16 = 8168203141246263063ULL;
int zero = 0;
unsigned long long int var_20 = 9478308980485227207ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
