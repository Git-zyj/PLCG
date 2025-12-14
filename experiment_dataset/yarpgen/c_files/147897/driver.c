#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1921250507;
unsigned char var_3 = (unsigned char)238;
unsigned char var_7 = (unsigned char)160;
unsigned char var_9 = (unsigned char)184;
short var_10 = (short)30973;
unsigned long long int var_11 = 6030870394866841475ULL;
unsigned long long int var_12 = 8545289821683325602ULL;
short var_15 = (short)-24040;
unsigned long long int var_16 = 8048911536730844796ULL;
unsigned long long int var_17 = 4818518591531819909ULL;
unsigned int var_18 = 3262631188U;
short var_19 = (short)672;
int zero = 0;
unsigned short var_20 = (unsigned short)11032;
unsigned long long int var_21 = 16710846190179591491ULL;
unsigned char var_22 = (unsigned char)114;
int var_23 = 1961387544;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
