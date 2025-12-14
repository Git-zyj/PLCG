#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2555207124U;
unsigned int var_3 = 2138824078U;
unsigned int var_5 = 3235904467U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2166923315U;
int var_9 = 331022517;
unsigned int var_10 = 2830678188U;
int var_11 = 414292050;
int zero = 0;
long long int var_12 = 6749588850973792999LL;
unsigned int var_13 = 377886920U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
