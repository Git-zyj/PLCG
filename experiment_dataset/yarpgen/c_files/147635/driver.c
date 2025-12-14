#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)246;
unsigned short var_10 = (unsigned short)2288;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 17460789416620015514ULL;
long long int var_16 = 3296364004369229415LL;
long long int var_17 = 8808184877982942432LL;
unsigned int var_18 = 2620742299U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
