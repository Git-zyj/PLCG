#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3731324652291195945ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1976226541455991109ULL;
int var_5 = 413747857;
int var_6 = 795548192;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 744593147;
int var_16 = -1091147137;
short var_17 = (short)-4488;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
