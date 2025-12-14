#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)63026;
unsigned char var_4 = (unsigned char)200;
unsigned int var_5 = 3350260178U;
short var_8 = (short)24593;
unsigned short var_11 = (unsigned short)48716;
unsigned int var_13 = 351224898U;
int var_15 = 1718762256;
unsigned int var_17 = 2792111909U;
int zero = 0;
int var_18 = 308841923;
long long int var_19 = -4949960725895691785LL;
_Bool var_20 = (_Bool)1;
int var_21 = -775126855;
unsigned int var_22 = 4074521067U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
