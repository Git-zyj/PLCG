#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1753245245U;
unsigned short var_10 = (unsigned short)64237;
_Bool var_13 = (_Bool)1;
long long int var_19 = -5819949552945123396LL;
int zero = 0;
long long int var_20 = -4733218767655109262LL;
unsigned short var_21 = (unsigned short)21641;
unsigned int var_22 = 509262999U;
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
