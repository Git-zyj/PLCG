#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned long long int var_2 = 3949483652592857617ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)26732;
unsigned short var_12 = (unsigned short)9889;
unsigned int var_13 = 1728415465U;
long long int var_15 = -3780014693218041705LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)39831;
unsigned short var_18 = (unsigned short)3308;
unsigned int var_19 = 478434137U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
