#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-113;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -4186928848901481130LL;
unsigned long long int var_17 = 9475905590603151671ULL;
int var_18 = 1309471628;
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
