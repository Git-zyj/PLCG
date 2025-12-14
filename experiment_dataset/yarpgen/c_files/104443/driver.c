#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8047310195284543246ULL;
short var_1 = (short)8419;
_Bool var_2 = (_Bool)1;
int var_4 = 1827360361;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)85;
short var_12 = (short)13927;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned int var_14 = 3264010218U;
int var_15 = -1079220661;
signed char var_16 = (signed char)-116;
short var_17 = (short)23745;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
