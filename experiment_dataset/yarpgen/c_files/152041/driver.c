#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
long long int var_9 = 5334088721261801586LL;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 657271110U;
int zero = 0;
unsigned short var_20 = (unsigned short)2807;
unsigned short var_21 = (unsigned short)46901;
short var_22 = (short)-8836;
short var_23 = (short)-18224;
long long int var_24 = 2325696416980309888LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
