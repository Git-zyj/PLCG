#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56143;
signed char var_6 = (signed char)-56;
unsigned int var_7 = 850611878U;
unsigned char var_14 = (unsigned char)249;
int zero = 0;
unsigned char var_15 = (unsigned char)87;
int var_16 = 467801923;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
