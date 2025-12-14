#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = 8853370159975490426LL;
unsigned long long int var_19 = 14482173132220326578ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)15469;
unsigned int var_21 = 893839868U;
unsigned int var_22 = 747778712U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
