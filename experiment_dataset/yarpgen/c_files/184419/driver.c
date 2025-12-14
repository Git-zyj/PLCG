#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7027924074363590592LL;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 4294542921U;
int zero = 0;
unsigned long long int var_13 = 11914997735633668526ULL;
unsigned int var_14 = 969185511U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
