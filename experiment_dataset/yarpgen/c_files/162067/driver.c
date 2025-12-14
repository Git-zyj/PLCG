#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)42;
unsigned int var_6 = 2374617450U;
int var_7 = 2043776577;
signed char var_9 = (signed char)50;
unsigned int var_13 = 3513919602U;
int zero = 0;
long long int var_16 = 259765481923829557LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
