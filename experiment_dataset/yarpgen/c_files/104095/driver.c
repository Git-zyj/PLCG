#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
signed char var_8 = (signed char)76;
signed char var_10 = (signed char)118;
unsigned int var_16 = 2555893874U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-15249;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
