#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23751;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7207120406716847313ULL;
long long int var_10 = 724625472225526374LL;
unsigned int var_11 = 1831212279U;
int zero = 0;
long long int var_17 = 3332156136573814287LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14014046809420051191ULL;
void init() {
}

void checksum() {
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
