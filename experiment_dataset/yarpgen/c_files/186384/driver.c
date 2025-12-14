#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29600;
short var_4 = (short)-14238;
signed char var_6 = (signed char)-40;
unsigned long long int var_8 = 1665221307938241218ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)6125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
