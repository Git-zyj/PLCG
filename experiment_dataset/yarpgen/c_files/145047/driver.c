#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2154510726U;
_Bool var_5 = (_Bool)1;
unsigned int var_11 = 1207172860U;
unsigned int var_13 = 1088378246U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 6736615445331819180ULL;
long long int var_17 = 6171108269551686653LL;
unsigned long long int var_18 = 4406061294700917551ULL;
void init() {
}

void checksum() {
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
