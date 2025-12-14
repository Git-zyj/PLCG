#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 7499535098016707793LL;
unsigned short var_3 = (unsigned short)64991;
unsigned int var_7 = 1392662731U;
int var_10 = -2041712729;
int zero = 0;
signed char var_11 = (signed char)58;
long long int var_12 = 2993174524437124493LL;
int var_13 = 508430591;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
