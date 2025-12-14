#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17214;
unsigned char var_3 = (unsigned char)150;
unsigned int var_4 = 686573749U;
long long int var_7 = -8150880069857947207LL;
unsigned int var_9 = 2351643793U;
unsigned int var_11 = 3931292088U;
long long int var_12 = 1708029255034956070LL;
int zero = 0;
unsigned long long int var_15 = 5634688462331891333ULL;
long long int var_16 = -2958614009540379411LL;
short var_17 = (short)3923;
long long int var_18 = -5739817472408102510LL;
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
