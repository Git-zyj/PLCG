#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7992516196559608552LL;
long long int var_4 = 5786519156230843934LL;
signed char var_5 = (signed char)62;
unsigned char var_12 = (unsigned char)213;
long long int var_13 = 7169895666469346219LL;
short var_15 = (short)827;
int zero = 0;
short var_17 = (short)14619;
unsigned char var_18 = (unsigned char)176;
unsigned long long int var_19 = 11303323854167465797ULL;
unsigned char var_20 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
