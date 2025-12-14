#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 498542515U;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)20901;
int var_8 = -793387048;
int zero = 0;
int var_12 = 656711233;
unsigned long long int var_13 = 7895064970595239485ULL;
unsigned int var_14 = 496212741U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
