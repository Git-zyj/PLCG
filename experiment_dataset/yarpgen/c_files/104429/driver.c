#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 435149610;
unsigned long long int var_2 = 8103870750559284792ULL;
unsigned long long int var_5 = 7327285134753658368ULL;
int var_8 = 1425320844;
unsigned int var_9 = 1914170506U;
unsigned char var_12 = (unsigned char)84;
short var_13 = (short)14649;
int var_14 = -553202209;
int zero = 0;
unsigned int var_15 = 1871474623U;
long long int var_16 = -2579191465664933827LL;
unsigned char var_17 = (unsigned char)186;
unsigned int var_18 = 1635146009U;
int var_19 = -16125028;
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
