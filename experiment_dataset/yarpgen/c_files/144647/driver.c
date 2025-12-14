#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -912914584504841252LL;
unsigned int var_7 = 1564416369U;
unsigned short var_8 = (unsigned short)25919;
short var_11 = (short)25711;
long long int var_12 = -6312201592727308894LL;
short var_15 = (short)5121;
int zero = 0;
long long int var_16 = -7281914293000339755LL;
unsigned short var_17 = (unsigned short)29728;
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
