#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6228424154398515896LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 348777607U;
unsigned short var_6 = (unsigned short)59793;
unsigned int var_11 = 459213834U;
unsigned short var_12 = (unsigned short)59977;
long long int var_15 = -3899315420253641258LL;
int zero = 0;
signed char var_16 = (signed char)78;
unsigned long long int var_17 = 16302209293146090045ULL;
long long int var_18 = -3267534437853196876LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
