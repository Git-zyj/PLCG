#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)10377;
long long int var_10 = -2466094401167717105LL;
unsigned int var_13 = 3782398651U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-25894;
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
