#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2300999757660280851ULL;
short var_4 = (short)5147;
int var_6 = -1360943253;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 17661194045727339155ULL;
int zero = 0;
int var_19 = -864420157;
long long int var_20 = -7015809970365934354LL;
short var_21 = (short)30124;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
