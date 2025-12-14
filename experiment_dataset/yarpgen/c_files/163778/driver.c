#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = -6254502581973975891LL;
long long int var_7 = 2497380858754868952LL;
unsigned long long int var_8 = 2490923323824530242ULL;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
long long int var_16 = -5814195070797056514LL;
unsigned short var_17 = (unsigned short)40685;
unsigned int var_18 = 2158781355U;
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
