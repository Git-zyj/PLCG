#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22162;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 10254107315441038482ULL;
unsigned short var_13 = (unsigned short)57799;
unsigned long long int var_14 = 5392844306858955296ULL;
signed char var_15 = (signed char)124;
_Bool var_16 = (_Bool)1;
short var_17 = (short)8502;
int zero = 0;
unsigned int var_19 = 2205423593U;
unsigned char var_20 = (unsigned char)122;
unsigned long long int var_21 = 10991494144204957349ULL;
unsigned long long int var_22 = 18337981095200980642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
