#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6693023420806473959LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)74;
long long int var_12 = 3344193744575874383LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)11;
int var_16 = 1144605966;
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
