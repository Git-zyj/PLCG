#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1443187967U;
unsigned char var_4 = (unsigned char)203;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)118;
long long int var_9 = -8798525927151175112LL;
unsigned int var_10 = 4156135276U;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1698214909;
unsigned int var_13 = 2240410870U;
short var_14 = (short)6125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
