#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10388692636627557581ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 164103888237372976ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11299591582096899055ULL;
int zero = 0;
unsigned long long int var_11 = 8923364829283585092ULL;
int var_12 = 340002568;
unsigned int var_13 = 3273355680U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 112891321U;
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
