#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8129;
short var_4 = (short)-15828;
_Bool var_6 = (_Bool)1;
short var_7 = (short)28909;
int zero = 0;
short var_13 = (short)1888;
short var_14 = (short)-9008;
void init() {
}

void checksum() {
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
