#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3409052291U;
unsigned char var_2 = (unsigned char)86;
long long int var_4 = -7452177458861829390LL;
short var_5 = (short)29972;
signed char var_8 = (signed char)-47;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1930851016508031490ULL;
int zero = 0;
int var_15 = 31284536;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
