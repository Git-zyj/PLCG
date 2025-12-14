#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5896845952522959749ULL;
long long int var_7 = 5081346954404432210LL;
long long int var_11 = -2183778981770788409LL;
unsigned short var_14 = (unsigned short)37424;
long long int var_15 = 5797931204720603534LL;
int zero = 0;
int var_18 = -370800015;
unsigned short var_19 = (unsigned short)49401;
int var_20 = 1686833047;
short var_21 = (short)17426;
unsigned int var_22 = 227474661U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
