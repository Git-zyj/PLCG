#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)1118;
long long int var_4 = -8936340542032523001LL;
unsigned long long int var_8 = 17089743941939405484ULL;
short var_11 = (short)-6893;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 528722004U;
int var_14 = -2026313551;
int var_15 = 1277898782;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
