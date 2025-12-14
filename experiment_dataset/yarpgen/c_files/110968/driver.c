#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3268133637U;
long long int var_4 = 5183099328151171386LL;
long long int var_6 = -5870083009856037706LL;
long long int var_8 = -2949371438044167288LL;
unsigned short var_12 = (unsigned short)59882;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -446075938371145975LL;
unsigned long long int var_16 = 4209190630393284063ULL;
unsigned int var_17 = 2502142666U;
unsigned short var_18 = (unsigned short)5866;
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
