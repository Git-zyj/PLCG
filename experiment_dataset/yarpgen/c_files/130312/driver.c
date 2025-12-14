#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8722506736725810848LL;
_Bool var_5 = (_Bool)0;
long long int var_8 = 120433726301967698LL;
long long int var_12 = 3825905686628256874LL;
int zero = 0;
long long int var_16 = 8373106749362946290LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
