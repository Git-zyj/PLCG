#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3203274510U;
long long int var_5 = 8973042395030508649LL;
signed char var_9 = (signed char)14;
short var_10 = (short)2120;
unsigned int var_11 = 3656551261U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1583970030U;
signed char var_15 = (signed char)4;
int zero = 0;
signed char var_17 = (signed char)-74;
unsigned char var_18 = (unsigned char)187;
signed char var_19 = (signed char)29;
signed char var_20 = (signed char)-123;
unsigned int var_21 = 1299961852U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
