#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9187950554693477364LL;
_Bool var_1 = (_Bool)1;
int var_6 = 215557260;
int var_12 = -1779731425;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-22834;
unsigned int var_16 = 4067986209U;
void init() {
}

void checksum() {
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
