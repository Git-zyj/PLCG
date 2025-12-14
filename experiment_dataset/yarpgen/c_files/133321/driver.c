#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2657064002553774194LL;
int var_2 = -1991651924;
unsigned int var_6 = 3973493016U;
int zero = 0;
unsigned long long int var_15 = 17486083926656799493ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)228;
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
