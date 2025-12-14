#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2229578262U;
long long int var_1 = -8530825027501589485LL;
long long int var_3 = -1734327248201656805LL;
unsigned short var_4 = (unsigned short)47037;
unsigned long long int var_6 = 121392273893424106ULL;
short var_7 = (short)-3515;
unsigned short var_8 = (unsigned short)55884;
long long int var_9 = 7660043792246109670LL;
unsigned int var_10 = 2231538939U;
unsigned long long int var_13 = 12144535329375970844ULL;
unsigned long long int var_14 = 12882840069908491182ULL;
int zero = 0;
unsigned int var_15 = 2635407034U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)126;
unsigned char var_18 = (unsigned char)90;
short var_19 = (short)-25913;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
