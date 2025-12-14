#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 388714845U;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 647616550U;
int zero = 0;
long long int var_20 = -7682481228365937254LL;
unsigned int var_21 = 1976891393U;
unsigned int var_22 = 3086013986U;
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
