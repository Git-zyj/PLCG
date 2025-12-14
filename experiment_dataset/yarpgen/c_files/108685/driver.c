#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3296085961699195846LL;
long long int var_2 = -1559767017077385570LL;
long long int var_5 = -4692574708250033980LL;
long long int var_6 = -410502380109437067LL;
long long int var_7 = 1381143959084774131LL;
long long int var_10 = -3757233065778614213LL;
long long int var_12 = -2711680330603933399LL;
int zero = 0;
long long int var_14 = 6974635357723956361LL;
long long int var_15 = 4345910351882771163LL;
void init() {
}

void checksum() {
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
