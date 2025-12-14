#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2982052135864338507ULL;
unsigned int var_12 = 566581976U;
int zero = 0;
unsigned short var_13 = (unsigned short)37209;
unsigned char var_14 = (unsigned char)3;
unsigned short var_15 = (unsigned short)48214;
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
