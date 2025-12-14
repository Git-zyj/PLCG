#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)246;
unsigned char var_8 = (unsigned char)144;
unsigned char var_10 = (unsigned char)156;
int zero = 0;
int var_15 = 1172020862;
unsigned int var_16 = 564918043U;
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
