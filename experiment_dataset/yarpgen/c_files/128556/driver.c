#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32396;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 587972402U;
short var_9 = (short)-797;
int zero = 0;
unsigned short var_13 = (unsigned short)13827;
short var_14 = (short)8364;
long long int var_15 = -2840286811603709686LL;
signed char var_16 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
