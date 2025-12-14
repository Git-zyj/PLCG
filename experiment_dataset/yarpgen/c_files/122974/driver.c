#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)87;
_Bool var_8 = (_Bool)1;
int var_11 = -702594686;
_Bool var_12 = (_Bool)1;
long long int var_13 = -992153516585587405LL;
int zero = 0;
int var_16 = 1791557979;
long long int var_17 = -8386302407896485424LL;
signed char var_18 = (signed char)86;
void init() {
}

void checksum() {
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
