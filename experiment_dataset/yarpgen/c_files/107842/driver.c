#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31818;
unsigned long long int var_2 = 1292824118427728364ULL;
unsigned int var_4 = 2923945330U;
int var_5 = 354979803;
unsigned short var_6 = (unsigned short)64176;
unsigned short var_11 = (unsigned short)65530;
short var_15 = (short)9513;
int zero = 0;
unsigned short var_16 = (unsigned short)17297;
unsigned int var_17 = 2974197783U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5989038970396373173LL;
long long int var_20 = 6886984159061909104LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
