#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4026275235U;
unsigned long long int var_7 = 2512714136061326320ULL;
_Bool var_8 = (_Bool)0;
short var_12 = (short)-24641;
short var_15 = (short)29439;
short var_16 = (short)1070;
int zero = 0;
unsigned long long int var_18 = 12911142066470586918ULL;
int var_19 = 1310709712;
short var_20 = (short)-18311;
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
