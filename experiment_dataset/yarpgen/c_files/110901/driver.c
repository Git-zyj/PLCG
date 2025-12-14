#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)203;
long long int var_9 = -6449966072968804886LL;
int zero = 0;
short var_14 = (short)13849;
long long int var_15 = -4046509296453748147LL;
unsigned char var_16 = (unsigned char)207;
long long int var_17 = -5942678598619157074LL;
short var_18 = (short)25104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
