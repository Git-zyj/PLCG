#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11796889220767672526ULL;
int var_1 = 314863818;
unsigned long long int var_3 = 6765174937599777908ULL;
long long int var_4 = -7452817665282303028LL;
unsigned long long int var_5 = 652814643009988566ULL;
long long int var_8 = 6520438209471657452LL;
int var_11 = -1213808071;
_Bool var_12 = (_Bool)0;
int var_13 = 417296303;
int zero = 0;
unsigned int var_15 = 1575048995U;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
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
