#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 615687573U;
short var_1 = (short)15211;
signed char var_2 = (signed char)122;
int zero = 0;
long long int var_13 = 8548622594531382267LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11958;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
