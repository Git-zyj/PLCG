#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2724609674U;
signed char var_3 = (signed char)63;
unsigned char var_7 = (unsigned char)123;
signed char var_10 = (signed char)113;
unsigned int var_12 = 3597428075U;
int zero = 0;
signed char var_13 = (signed char)96;
signed char var_14 = (signed char)29;
_Bool var_15 = (_Bool)0;
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
