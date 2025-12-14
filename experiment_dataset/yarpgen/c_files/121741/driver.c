#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2512417397625024256LL;
unsigned int var_3 = 3208393958U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-30967;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 10522442497240780734ULL;
unsigned short var_14 = (unsigned short)8361;
unsigned long long int var_15 = 6609533218579434598ULL;
int zero = 0;
long long int var_16 = -8308179456931485728LL;
unsigned long long int var_17 = 3328466692521012811ULL;
unsigned short var_18 = (unsigned short)41545;
unsigned int var_19 = 2834312429U;
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
