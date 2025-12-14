#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2888328686902478105LL;
signed char var_1 = (signed char)63;
int var_2 = 252046196;
unsigned int var_3 = 4216327564U;
long long int var_10 = 2793612094631282887LL;
unsigned short var_11 = (unsigned short)2962;
unsigned long long int var_13 = 1081458001254383703ULL;
long long int var_15 = -2120424550886367392LL;
long long int var_17 = -1664896523608116188LL;
int zero = 0;
unsigned int var_18 = 2835102212U;
unsigned int var_19 = 3898007390U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
