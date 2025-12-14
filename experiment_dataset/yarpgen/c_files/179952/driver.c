#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3555030637U;
signed char var_7 = (signed char)-28;
long long int var_10 = 2318577091322155124LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2527878930823289595ULL;
int zero = 0;
long long int var_14 = -7444656072793092322LL;
unsigned int var_15 = 3353674110U;
long long int var_16 = 8320094644511506824LL;
void init() {
}

void checksum() {
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
