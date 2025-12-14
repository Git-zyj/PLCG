#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4156790488548055619LL;
unsigned short var_7 = (unsigned short)16788;
unsigned long long int var_10 = 13103074672069507290ULL;
unsigned short var_12 = (unsigned short)54070;
unsigned char var_13 = (unsigned char)238;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 392023170U;
long long int var_16 = -6822709161653706258LL;
int var_17 = 1962684044;
unsigned char var_18 = (unsigned char)168;
void init() {
}

void checksum() {
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
