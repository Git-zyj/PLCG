#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 539982709U;
long long int var_4 = -5802788789389072656LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 7266570049414515356ULL;
int var_10 = 1286755793;
int var_13 = 599227321;
_Bool var_15 = (_Bool)1;
int var_17 = 1979698683;
int zero = 0;
unsigned long long int var_18 = 6626080676268374410ULL;
signed char var_19 = (signed char)13;
void init() {
}

void checksum() {
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
