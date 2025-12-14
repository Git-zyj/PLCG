#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2566425552399470857ULL;
unsigned int var_6 = 2083546931U;
int var_7 = -1749836690;
int zero = 0;
long long int var_12 = 4730388787873725048LL;
_Bool var_13 = (_Bool)1;
int var_14 = 608535789;
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
