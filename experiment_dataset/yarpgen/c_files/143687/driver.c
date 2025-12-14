#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 369647690;
unsigned short var_5 = (unsigned short)16047;
unsigned long long int var_6 = 12199512595818159072ULL;
long long int var_9 = -4868391079334562533LL;
unsigned int var_11 = 1158090400U;
int zero = 0;
int var_12 = -385262011;
long long int var_13 = -7339394024343174393LL;
unsigned short var_14 = (unsigned short)20217;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
