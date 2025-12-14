#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2409199188U;
short var_8 = (short)30095;
signed char var_10 = (signed char)105;
unsigned short var_12 = (unsigned short)28119;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -768252095;
long long int var_15 = 8171104182448623805LL;
long long int var_16 = 3161256997854292905LL;
void init() {
}

void checksum() {
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
