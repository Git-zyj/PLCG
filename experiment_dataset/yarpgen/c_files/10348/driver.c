#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3143;
int var_4 = 1071508118;
short var_6 = (short)14008;
short var_7 = (short)-4884;
int var_11 = -1842061176;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3153198708U;
unsigned long long int var_14 = 8515894405312924414ULL;
int var_15 = -1079921631;
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
