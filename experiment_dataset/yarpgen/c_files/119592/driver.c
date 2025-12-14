#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1925540848960565685LL;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2597164022U;
short var_8 = (short)4474;
unsigned long long int var_12 = 12367501935270649199ULL;
int zero = 0;
unsigned int var_13 = 3623373250U;
long long int var_14 = -1731611730002723151LL;
int var_15 = 72712097;
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
