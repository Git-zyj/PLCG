#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5039575760632961837ULL;
signed char var_3 = (signed char)88;
signed char var_6 = (signed char)-122;
short var_9 = (short)-17795;
unsigned int var_14 = 1038202055U;
long long int var_16 = 2511886794714212465LL;
int var_18 = 1258365475;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8117966727236665136ULL;
short var_22 = (short)12392;
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
