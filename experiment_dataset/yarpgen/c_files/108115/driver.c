#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8761;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)62;
long long int var_9 = -8356987592237416875LL;
short var_10 = (short)-19977;
int zero = 0;
int var_11 = -1026341601;
signed char var_12 = (signed char)120;
short var_13 = (short)-23996;
long long int var_14 = 744602621225936769LL;
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
