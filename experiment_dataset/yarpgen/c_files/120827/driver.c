#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5872336725233355405LL;
long long int var_8 = 857644423858968679LL;
int zero = 0;
signed char var_15 = (signed char)18;
long long int var_16 = 6366831734254882351LL;
long long int var_17 = -6629159939247158106LL;
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
