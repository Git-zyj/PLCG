#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -838506068;
int var_6 = 1650015439;
int var_7 = 1152422986;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -1440203240;
unsigned int var_13 = 1136690441U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
