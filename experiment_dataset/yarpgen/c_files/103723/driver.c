#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1789376656;
unsigned char var_1 = (unsigned char)20;
_Bool var_2 = (_Bool)1;
int var_9 = 1174538860;
unsigned long long int var_10 = 13946574748663840210ULL;
int var_13 = -789006027;
unsigned int var_14 = 181680207U;
int zero = 0;
signed char var_15 = (signed char)-94;
unsigned long long int var_16 = 15578135687812971001ULL;
unsigned char var_17 = (unsigned char)111;
void init() {
}

void checksum() {
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
