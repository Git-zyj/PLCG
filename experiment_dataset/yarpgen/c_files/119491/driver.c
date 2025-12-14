#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4019918910U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -502156072;
unsigned int var_11 = 1181593829U;
unsigned int var_12 = 3118234770U;
int zero = 0;
short var_14 = (short)6311;
signed char var_15 = (signed char)43;
signed char var_16 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
