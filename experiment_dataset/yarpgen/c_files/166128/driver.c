#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)13327;
unsigned int var_7 = 1902917845U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1038858193U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)147;
unsigned int var_13 = 4019603257U;
unsigned char var_14 = (unsigned char)194;
short var_15 = (short)14740;
int zero = 0;
unsigned char var_17 = (unsigned char)173;
int var_18 = 35960430;
long long int var_19 = -3667401345327943740LL;
unsigned long long int var_20 = 8917741884320249592ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
