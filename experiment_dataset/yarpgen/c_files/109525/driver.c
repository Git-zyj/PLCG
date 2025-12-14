#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_10 = 1605050560U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2575323234U;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = 144618275883790545LL;
long long int var_15 = -1624272881334251958LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)32671;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
