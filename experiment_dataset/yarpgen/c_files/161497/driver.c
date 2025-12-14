#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
int var_7 = 518431115;
unsigned int var_12 = 1754246178U;
unsigned long long int var_19 = 13820862193453759847ULL;
int zero = 0;
long long int var_20 = -1512963625930690226LL;
int var_21 = -780271459;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
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
