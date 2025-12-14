#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -325514272;
unsigned short var_3 = (unsigned short)41732;
unsigned int var_6 = 689418389U;
int var_13 = -1419193011;
int zero = 0;
short var_15 = (short)-16012;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)114;
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
