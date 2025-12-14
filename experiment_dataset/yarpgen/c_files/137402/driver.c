#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_12 = 3558621436U;
unsigned int var_14 = 2039558652U;
int zero = 0;
long long int var_16 = -7784552119475405966LL;
unsigned long long int var_17 = 6427740199058572154ULL;
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
