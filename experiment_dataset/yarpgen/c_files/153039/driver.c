#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1276229426809018581LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 750868989U;
unsigned int var_9 = 2079067105U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-7849;
int zero = 0;
short var_13 = (short)14461;
unsigned int var_14 = 3225628336U;
signed char var_15 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
