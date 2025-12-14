#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2486769760U;
unsigned short var_4 = (unsigned short)61773;
long long int var_5 = 7230482379911854668LL;
unsigned int var_7 = 2574080208U;
long long int var_8 = -8994581528152841780LL;
unsigned char var_9 = (unsigned char)205;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
unsigned long long int var_15 = 15805324552164902559ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2166875162U;
unsigned char var_18 = (unsigned char)64;
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
