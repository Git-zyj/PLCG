#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40469;
unsigned long long int var_1 = 11372148279632917387ULL;
short var_3 = (short)-24175;
signed char var_4 = (signed char)66;
int var_6 = -193939233;
_Bool var_7 = (_Bool)1;
int var_8 = 1951204894;
int zero = 0;
short var_10 = (short)28867;
int var_11 = -908550651;
unsigned long long int var_12 = 9550050995282370305ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
