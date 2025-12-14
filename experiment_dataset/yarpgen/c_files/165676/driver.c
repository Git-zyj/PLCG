#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 645372831U;
int var_6 = 641764231;
int var_9 = -113276585;
int var_15 = -1834364552;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1853588385;
unsigned short var_22 = (unsigned short)64273;
void init() {
}

void checksum() {
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
