#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2450699606315243422ULL;
unsigned long long int var_4 = 6267758732395063104ULL;
signed char var_5 = (signed char)9;
signed char var_6 = (signed char)-48;
unsigned short var_7 = (unsigned short)13323;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 138175699939548144ULL;
signed char var_16 = (signed char)-113;
int zero = 0;
int var_18 = -147812865;
int var_19 = -4201891;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
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
