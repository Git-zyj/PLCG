#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)18887;
_Bool var_8 = (_Bool)1;
short var_13 = (short)11053;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)10276;
int var_19 = -2022690516;
int var_20 = -377692100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
