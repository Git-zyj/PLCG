#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2227883872141066210ULL;
short var_7 = (short)14466;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)2882;
unsigned int var_15 = 242304243U;
unsigned long long int var_17 = 17169837968903942550ULL;
int zero = 0;
unsigned long long int var_19 = 10666196344854393967ULL;
unsigned long long int var_20 = 3781958559887922404ULL;
long long int var_21 = -7691492964358530547LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 826884599U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
