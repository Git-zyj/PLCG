#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-31550;
short var_2 = (short)30940;
int var_3 = 1682104656;
unsigned long long int var_6 = 8915854669464281609ULL;
int var_9 = -2013129395;
signed char var_10 = (signed char)-107;
unsigned int var_12 = 737595731U;
short var_13 = (short)18696;
signed char var_15 = (signed char)55;
int zero = 0;
long long int var_18 = 5672974533705998196LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)78;
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
