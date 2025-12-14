#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7653;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-443;
unsigned long long int var_10 = 7909130323971154501ULL;
long long int var_11 = -7970321271861799455LL;
int zero = 0;
short var_15 = (short)11263;
unsigned int var_16 = 3069460318U;
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
