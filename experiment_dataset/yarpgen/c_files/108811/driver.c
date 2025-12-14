#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9349317269222862132ULL;
unsigned long long int var_6 = 6867929220211048296ULL;
unsigned char var_9 = (unsigned char)236;
long long int var_12 = 3125180741490947008LL;
signed char var_14 = (signed char)121;
int zero = 0;
unsigned long long int var_19 = 1396577761621861655ULL;
unsigned long long int var_20 = 6958110312480572588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
