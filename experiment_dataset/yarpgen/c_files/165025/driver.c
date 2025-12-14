#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
unsigned int var_1 = 4044589295U;
unsigned int var_8 = 3127657540U;
int zero = 0;
unsigned int var_10 = 4115829336U;
int var_11 = 1148215324;
_Bool var_12 = (_Bool)0;
int var_13 = 1681056426;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
