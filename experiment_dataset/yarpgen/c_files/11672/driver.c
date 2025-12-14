#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4940;
short var_3 = (short)-4077;
int var_8 = -1277125734;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = -935139429;
unsigned int var_14 = 1243797079U;
int var_15 = -158067962;
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
