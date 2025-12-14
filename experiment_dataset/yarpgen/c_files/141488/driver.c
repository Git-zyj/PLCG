#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6275090347622444802ULL;
unsigned long long int var_1 = 7668866778273746791ULL;
unsigned long long int var_7 = 14115758638823007519ULL;
unsigned int var_10 = 4156189858U;
long long int var_12 = -2297746090915725604LL;
int zero = 0;
unsigned long long int var_13 = 8116980668240150346ULL;
int var_14 = -697840236;
unsigned short var_15 = (unsigned short)15887;
unsigned int var_16 = 961674876U;
short var_17 = (short)15591;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
