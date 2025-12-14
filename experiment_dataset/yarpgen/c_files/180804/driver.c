#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_7 = 1336094949U;
signed char var_8 = (signed char)10;
int var_9 = 2135877190;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned int var_14 = 1534047918U;
signed char var_15 = (signed char)83;
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
