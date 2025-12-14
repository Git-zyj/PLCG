#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
long long int var_1 = 9054655598015284187LL;
unsigned long long int var_3 = 15760188947595133775ULL;
signed char var_4 = (signed char)-3;
signed char var_7 = (signed char)60;
long long int var_10 = 8495452109228691428LL;
long long int var_11 = 2784152308834106325LL;
unsigned char var_12 = (unsigned char)74;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3567978080U;
unsigned int var_15 = 626264273U;
unsigned int var_16 = 376602702U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
