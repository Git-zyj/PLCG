#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3165;
unsigned int var_9 = 2819307976U;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
unsigned int var_11 = 2987322760U;
long long int var_12 = -8230871237427675684LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
