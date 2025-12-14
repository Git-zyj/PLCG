#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3319682154685672526LL;
short var_3 = (short)18001;
int var_4 = 1396911956;
long long int var_5 = 7473384074277370061LL;
signed char var_6 = (signed char)-111;
unsigned int var_7 = 3289714660U;
unsigned short var_8 = (unsigned short)27943;
unsigned short var_11 = (unsigned short)58911;
unsigned long long int var_13 = 4387803649125040552ULL;
short var_14 = (short)16129;
int zero = 0;
long long int var_15 = 4949226766747181899LL;
signed char var_16 = (signed char)-114;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2308110053U;
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
