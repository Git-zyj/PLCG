#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-46;
unsigned int var_11 = 4101377731U;
long long int var_12 = -7626447623776976855LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2694174457838969924LL;
long long int var_15 = -8926353247833597372LL;
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
