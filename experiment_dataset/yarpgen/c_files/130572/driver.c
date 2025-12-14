#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3799943170499965622LL;
long long int var_12 = -1306346549934392449LL;
int zero = 0;
unsigned int var_13 = 376039301U;
long long int var_14 = 283728366217893227LL;
unsigned int var_15 = 2608341257U;
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
