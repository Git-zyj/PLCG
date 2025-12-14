#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 7210458965674457297ULL;
long long int var_5 = 1701992187092682485LL;
unsigned long long int var_8 = 11774488792119941607ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1691219356646046405LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7083896958705407657LL;
int zero = 0;
long long int var_13 = -1127129857137699856LL;
long long int var_14 = 17459479113850640LL;
long long int var_15 = 7574397342126493895LL;
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
