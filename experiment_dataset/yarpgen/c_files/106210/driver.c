#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -424402077;
int var_15 = -423994527;
int zero = 0;
unsigned int var_19 = 1496213779U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7913188844823248242ULL;
long long int var_22 = -3283480983278975487LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
