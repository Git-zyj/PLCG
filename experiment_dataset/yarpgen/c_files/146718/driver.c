#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_11 = -461967759;
_Bool var_12 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)8928;
unsigned int var_21 = 1804067113U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
