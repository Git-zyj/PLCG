#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1557718490U;
unsigned int var_6 = 839973442U;
unsigned int var_7 = 1600890196U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 4475384843654706189LL;
short var_13 = (short)-31535;
unsigned short var_14 = (unsigned short)2874;
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
