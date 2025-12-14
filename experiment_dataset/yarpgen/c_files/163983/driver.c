#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 702910848U;
_Bool var_1 = (_Bool)0;
long long int var_2 = -7360818105313187929LL;
unsigned short var_3 = (unsigned short)11292;
int var_6 = 1147545556;
signed char var_7 = (signed char)-56;
unsigned long long int var_8 = 3109203077362458845ULL;
unsigned int var_9 = 1693992007U;
unsigned short var_11 = (unsigned short)40240;
unsigned int var_12 = 1423178525U;
int zero = 0;
int var_13 = -556901617;
int var_14 = -1656462927;
long long int var_15 = -6637762476477939918LL;
unsigned long long int var_16 = 12349958133690122666ULL;
int var_17 = -2113693471;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
