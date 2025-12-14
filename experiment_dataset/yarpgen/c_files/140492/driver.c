#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)149;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_13 = 920646287;
signed char var_14 = (signed char)84;
signed char var_15 = (signed char)-121;
unsigned int var_16 = 767189483U;
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
