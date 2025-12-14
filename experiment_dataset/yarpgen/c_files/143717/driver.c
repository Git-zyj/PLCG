#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5747014805406290224LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1029158424U;
unsigned long long int var_11 = 7951135268277919870ULL;
long long int var_12 = -1105285029132879229LL;
unsigned long long int var_13 = 11259911862296200287ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
