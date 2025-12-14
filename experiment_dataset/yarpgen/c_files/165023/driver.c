#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
_Bool var_9 = (_Bool)1;
unsigned int var_15 = 2890349979U;
int zero = 0;
unsigned int var_17 = 2503143851U;
long long int var_18 = 8857953711732205393LL;
unsigned long long int var_19 = 4653621099958601073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
