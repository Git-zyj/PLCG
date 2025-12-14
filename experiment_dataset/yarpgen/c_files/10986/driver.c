#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 919625284U;
unsigned char var_9 = (unsigned char)192;
int zero = 0;
unsigned long long int var_20 = 458977516285900412ULL;
long long int var_21 = 5024959199648364067LL;
unsigned char var_22 = (unsigned char)78;
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
