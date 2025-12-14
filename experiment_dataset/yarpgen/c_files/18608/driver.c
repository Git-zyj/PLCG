#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5262987116813603575ULL;
signed char var_3 = (signed char)50;
int var_4 = 329384207;
unsigned int var_7 = 3955287757U;
_Bool var_8 = (_Bool)0;
int var_10 = 2110008881;
int zero = 0;
unsigned int var_11 = 3783451922U;
int var_12 = -1143358765;
unsigned int var_13 = 2568926168U;
unsigned long long int var_14 = 1415696423801011227ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
