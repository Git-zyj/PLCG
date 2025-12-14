#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-70;
unsigned long long int var_10 = 1740778786148264315ULL;
signed char var_11 = (signed char)40;
int zero = 0;
unsigned long long int var_12 = 11730769109795930610ULL;
signed char var_13 = (signed char)102;
signed char var_14 = (signed char)47;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8182405515151827175LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
