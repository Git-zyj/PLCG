#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)58;
unsigned int var_7 = 1967466747U;
short var_8 = (short)11134;
short var_12 = (short)-15638;
_Bool var_14 = (_Bool)1;
short var_16 = (short)10413;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1875295408;
short var_22 = (short)23110;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
