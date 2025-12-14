#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1947676588U;
unsigned int var_6 = 2528540740U;
unsigned int var_9 = 4093379553U;
int zero = 0;
unsigned int var_12 = 407079415U;
unsigned int var_13 = 3821679680U;
unsigned int var_14 = 3806992108U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
