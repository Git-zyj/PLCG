#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
_Bool var_2 = (_Bool)1;
int var_6 = 378991935;
int var_8 = 1355618805;
unsigned long long int var_10 = 12853050901755455946ULL;
long long int var_18 = -8630644586155483404LL;
int zero = 0;
int var_20 = 1696846292;
int var_21 = -1289582820;
unsigned long long int var_22 = 9880175550527934519ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
