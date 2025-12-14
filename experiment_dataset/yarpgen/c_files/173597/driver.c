#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = 8268616812157766947LL;
unsigned char var_11 = (unsigned char)252;
int zero = 0;
unsigned int var_12 = 2895912064U;
signed char var_13 = (signed char)45;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)10389;
unsigned long long int var_16 = 5187469968927872615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
