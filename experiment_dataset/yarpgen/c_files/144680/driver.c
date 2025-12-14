#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2157718972U;
long long int var_3 = 2348324356858753888LL;
unsigned int var_10 = 1845401543U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 871741994U;
int var_14 = 50367938;
unsigned char var_15 = (unsigned char)166;
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
