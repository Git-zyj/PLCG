#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
long long int var_9 = -3404321084671795415LL;
unsigned int var_13 = 3806657544U;
int zero = 0;
long long int var_20 = -2131921570101959157LL;
unsigned long long int var_21 = 1097684925304168676ULL;
int var_22 = 1726623356;
long long int var_23 = 9019949420393923890LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
