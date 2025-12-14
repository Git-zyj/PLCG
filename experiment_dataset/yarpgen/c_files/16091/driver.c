#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2440448470U;
unsigned int var_7 = 57014052U;
int var_9 = -57369248;
long long int var_11 = 2039377988116008503LL;
unsigned short var_14 = (unsigned short)48268;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 4924122874304446162LL;
unsigned int var_17 = 2979713455U;
void init() {
}

void checksum() {
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
