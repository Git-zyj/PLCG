#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-87;
unsigned long long int var_5 = 844926574328412915ULL;
int var_6 = 1580171863;
unsigned short var_7 = (unsigned short)33528;
int zero = 0;
unsigned short var_10 = (unsigned short)9956;
int var_11 = 381554550;
long long int var_12 = -4284356742239770244LL;
unsigned long long int var_13 = 18138314686209426149ULL;
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
