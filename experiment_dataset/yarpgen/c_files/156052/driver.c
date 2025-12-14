#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-15374;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)18415;
short var_7 = (short)30791;
unsigned short var_9 = (unsigned short)44050;
int zero = 0;
short var_10 = (short)22304;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-29575;
unsigned int var_14 = 2268754911U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
