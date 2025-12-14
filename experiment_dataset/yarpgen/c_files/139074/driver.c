#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1400184212;
unsigned short var_2 = (unsigned short)54298;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 433802992U;
int var_9 = 174846187;
signed char var_13 = (signed char)21;
int zero = 0;
unsigned int var_16 = 353780094U;
unsigned char var_17 = (unsigned char)158;
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
