#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)125;
short var_5 = (short)-2502;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
unsigned int var_17 = 2283801015U;
unsigned int var_18 = 3549220338U;
unsigned long long int var_19 = 17973956770707706061ULL;
unsigned short var_20 = (unsigned short)28532;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
