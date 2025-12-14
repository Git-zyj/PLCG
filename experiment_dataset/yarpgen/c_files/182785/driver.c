#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15085215272465837742ULL;
unsigned long long int var_2 = 9417155336604572698ULL;
int var_4 = 645096212;
unsigned long long int var_7 = 16147636199964009557ULL;
short var_9 = (short)6838;
long long int var_10 = 3073647085675023397LL;
long long int var_11 = -4134442155272993654LL;
int zero = 0;
long long int var_13 = 4239493354963081113LL;
int var_14 = 1904515077;
short var_15 = (short)15922;
unsigned long long int var_16 = 4414322425276198365ULL;
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
