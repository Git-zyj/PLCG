#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
long long int var_1 = 747873031703020831LL;
long long int var_3 = -6625102500108895196LL;
unsigned long long int var_4 = 15943039722233185999ULL;
signed char var_5 = (signed char)-96;
signed char var_7 = (signed char)-44;
long long int var_8 = 5128240557983588697LL;
long long int var_9 = -8351392017870440822LL;
unsigned int var_10 = 751890413U;
unsigned char var_14 = (unsigned char)124;
int zero = 0;
int var_15 = 339057192;
signed char var_16 = (signed char)91;
unsigned int var_17 = 1317209274U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
