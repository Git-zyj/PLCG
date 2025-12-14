#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1369732320U;
signed char var_8 = (signed char)70;
long long int var_10 = -143292193900020524LL;
short var_14 = (short)-32230;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 791104746U;
unsigned char var_19 = (unsigned char)28;
int zero = 0;
short var_20 = (short)-24133;
short var_21 = (short)13556;
unsigned int var_22 = 4209013357U;
long long int var_23 = -3419786319893101318LL;
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
