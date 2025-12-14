#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42566;
unsigned int var_3 = 1655498837U;
unsigned int var_6 = 3293777565U;
unsigned char var_9 = (unsigned char)13;
_Bool var_12 = (_Bool)1;
short var_13 = (short)21075;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 813467894U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
