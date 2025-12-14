#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11119;
signed char var_4 = (signed char)-78;
signed char var_5 = (signed char)-88;
short var_7 = (short)-22850;
unsigned long long int var_9 = 4753067624143926867ULL;
unsigned int var_10 = 970409255U;
signed char var_11 = (signed char)89;
int zero = 0;
short var_17 = (short)3519;
short var_18 = (short)19096;
int var_19 = 1057010382;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3054267569U;
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
