#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2030478320U;
short var_1 = (short)29961;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)104;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)42469;
short var_13 = (short)15496;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
