#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2886063167U;
short var_3 = (short)21487;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-3469;
unsigned short var_6 = (unsigned short)40037;
short var_12 = (short)-41;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)39729;
int zero = 0;
short var_20 = (short)-8739;
_Bool var_21 = (_Bool)1;
int var_22 = -307302358;
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
