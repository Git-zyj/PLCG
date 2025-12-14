#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17872630394082506585ULL;
short var_2 = (short)-6362;
int var_3 = 1726297596;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-9411;
long long int var_9 = 5731372229830990814LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4073908736U;
int zero = 0;
unsigned long long int var_17 = 267292982834129170ULL;
unsigned long long int var_18 = 13243398335301881563ULL;
void init() {
}

void checksum() {
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
