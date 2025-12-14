#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned char var_10 = (unsigned char)245;
unsigned char var_11 = (unsigned char)241;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 2104865801U;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned char var_17 = (unsigned char)58;
void init() {
}

void checksum() {
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
