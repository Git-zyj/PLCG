#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2030829456;
unsigned int var_2 = 468590433U;
unsigned int var_3 = 1479624829U;
unsigned int var_9 = 3135214284U;
unsigned int var_11 = 1753705199U;
int zero = 0;
unsigned int var_13 = 3230157329U;
unsigned int var_14 = 3171583884U;
unsigned int var_15 = 3104853397U;
unsigned int var_16 = 2983805094U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
