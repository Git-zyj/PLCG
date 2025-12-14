#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-6792;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 2783066699U;
_Bool var_11 = (_Bool)0;
short var_13 = (short)4550;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4286303832U;
int zero = 0;
short var_20 = (short)16159;
short var_21 = (short)23640;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
