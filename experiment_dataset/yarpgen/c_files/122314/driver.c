#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)245;
signed char var_6 = (signed char)44;
short var_7 = (short)7416;
long long int var_8 = 7211124462150145329LL;
long long int var_11 = -7717654772562026171LL;
int zero = 0;
short var_12 = (short)11511;
signed char var_13 = (signed char)3;
unsigned short var_14 = (unsigned short)35841;
int var_15 = -1465687369;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
