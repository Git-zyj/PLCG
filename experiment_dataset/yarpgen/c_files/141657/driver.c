#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2749002770U;
long long int var_8 = 1999302870638798038LL;
short var_9 = (short)8475;
signed char var_17 = (signed char)12;
int zero = 0;
int var_19 = 610627956;
long long int var_20 = -6944118781422110589LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
