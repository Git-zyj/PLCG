#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3131875279U;
short var_9 = (short)23190;
short var_15 = (short)9793;
unsigned int var_18 = 4283136216U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2419263515U;
signed char var_22 = (signed char)12;
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
