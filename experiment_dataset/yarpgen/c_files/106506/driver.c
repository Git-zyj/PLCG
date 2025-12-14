#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14795100911265953335ULL;
unsigned long long int var_4 = 3363739681375664306ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-56;
unsigned int var_14 = 3200698859U;
short var_16 = (short)10008;
int zero = 0;
int var_18 = 1313872665;
unsigned long long int var_19 = 9393794269756218698ULL;
unsigned int var_20 = 3868504244U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
