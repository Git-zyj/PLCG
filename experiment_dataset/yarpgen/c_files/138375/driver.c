#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 93344374689608364LL;
unsigned int var_5 = 535949479U;
long long int var_6 = -2379998185451952716LL;
long long int var_7 = -7095863714589266020LL;
unsigned int var_8 = 872330787U;
int zero = 0;
long long int var_15 = -6070629639115810524LL;
unsigned short var_16 = (unsigned short)30522;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
