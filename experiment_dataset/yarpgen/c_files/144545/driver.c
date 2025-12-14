#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14791781832763407471ULL;
signed char var_6 = (signed char)-49;
_Bool var_7 = (_Bool)1;
int var_8 = -281879844;
int var_11 = -481715259;
int zero = 0;
long long int var_12 = -8098428192415851587LL;
unsigned char var_13 = (unsigned char)235;
void init() {
}

void checksum() {
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
