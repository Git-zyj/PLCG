#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5967093641361408398LL;
unsigned long long int var_1 = 15037802408999729585ULL;
_Bool var_3 = (_Bool)1;
int var_5 = -380382518;
int var_6 = 1431515140;
short var_8 = (short)5458;
int zero = 0;
unsigned int var_12 = 2893422045U;
unsigned char var_13 = (unsigned char)175;
long long int var_14 = 209488860101131620LL;
void init() {
}

void checksum() {
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
