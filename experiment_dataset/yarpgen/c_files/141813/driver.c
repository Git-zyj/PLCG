#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17567;
long long int var_3 = -1745624251885177283LL;
unsigned int var_5 = 3407292539U;
unsigned int var_6 = 2293723539U;
long long int var_7 = -752888371402861213LL;
short var_9 = (short)9935;
long long int var_10 = -3790816836019246790LL;
int zero = 0;
long long int var_11 = -7310268810486238470LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
