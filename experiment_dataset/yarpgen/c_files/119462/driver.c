#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 1751625651661844071LL;
unsigned int var_14 = 187327772U;
int zero = 0;
unsigned int var_15 = 3595028733U;
long long int var_16 = 6613709413344010780LL;
long long int var_17 = -7515632286452886701LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
