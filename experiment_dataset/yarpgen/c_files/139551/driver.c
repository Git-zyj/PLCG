#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8738772685625580619ULL;
unsigned long long int var_1 = 10436662862827684395ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 8853699258869585851ULL;
long long int var_8 = 1728508586705512186LL;
unsigned int var_9 = 3204557777U;
int zero = 0;
int var_12 = 1247568068;
int var_13 = -597613438;
unsigned long long int var_14 = 12046834202570022884ULL;
long long int var_15 = -811966974750898530LL;
void init() {
}

void checksum() {
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
