#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -864412989;
int var_3 = -536631631;
unsigned int var_6 = 4209898808U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1635083725720678924ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 123052028U;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = 10202152;
int var_18 = -688788519;
int var_19 = 497745183;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
