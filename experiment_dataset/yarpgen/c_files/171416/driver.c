#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1385124110U;
unsigned int var_4 = 2586687565U;
short var_5 = (short)27052;
unsigned short var_7 = (unsigned short)44535;
_Bool var_10 = (_Bool)1;
long long int var_15 = 528568416816728009LL;
unsigned short var_16 = (unsigned short)36221;
int zero = 0;
short var_19 = (short)1992;
unsigned int var_20 = 698042441U;
long long int var_21 = -5788722658411826806LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
