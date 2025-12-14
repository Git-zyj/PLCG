#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3772898233U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)212;
int var_7 = 1097343384;
long long int var_12 = 2340075763139839927LL;
unsigned long long int var_13 = 3200737284581365628ULL;
long long int var_14 = -8441342437594860994LL;
int zero = 0;
int var_19 = -1822999333;
short var_20 = (short)-29316;
unsigned int var_21 = 3609225864U;
long long int var_22 = 4116182840642635418LL;
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
