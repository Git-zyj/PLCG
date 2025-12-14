#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11369;
unsigned int var_2 = 3896428081U;
unsigned long long int var_6 = 5796184034854139323ULL;
short var_19 = (short)22582;
int zero = 0;
unsigned short var_20 = (unsigned short)9949;
long long int var_21 = 292655077510901668LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)11086;
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
