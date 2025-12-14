#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned int var_1 = 3809209798U;
long long int var_3 = -2893569615409084448LL;
unsigned int var_4 = 3745014256U;
unsigned char var_5 = (unsigned char)162;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6780761674063501462LL;
int zero = 0;
unsigned long long int var_10 = 5012603242238684565ULL;
int var_11 = 2051366700;
unsigned short var_12 = (unsigned short)15189;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
