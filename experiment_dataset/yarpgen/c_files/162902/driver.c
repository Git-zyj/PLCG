#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1213251187U;
long long int var_7 = 1797609800824535892LL;
long long int var_14 = 5884112733904095668LL;
int zero = 0;
unsigned long long int var_18 = 12257766719186938215ULL;
unsigned int var_19 = 1961860966U;
void init() {
}

void checksum() {
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
