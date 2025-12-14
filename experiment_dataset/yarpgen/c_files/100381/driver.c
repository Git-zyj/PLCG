#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43144;
unsigned long long int var_2 = 2932334868736622612ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)236;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_19 = 5030538761239334384LL;
unsigned long long int var_20 = 16547626829437850809ULL;
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
