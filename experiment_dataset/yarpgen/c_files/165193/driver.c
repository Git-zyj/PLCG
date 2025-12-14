#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2861435708U;
_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)250;
unsigned char var_9 = (unsigned char)143;
int zero = 0;
signed char var_13 = (signed char)11;
unsigned char var_14 = (unsigned char)70;
unsigned int var_15 = 2177251187U;
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
