#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2913652131U;
int var_3 = -1164467327;
_Bool var_8 = (_Bool)1;
unsigned long long int var_14 = 13849387247098975267ULL;
int zero = 0;
unsigned long long int var_19 = 2950197743427074296ULL;
unsigned int var_20 = 2872131225U;
unsigned short var_21 = (unsigned short)37284;
unsigned int var_22 = 193502652U;
signed char var_23 = (signed char)110;
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
