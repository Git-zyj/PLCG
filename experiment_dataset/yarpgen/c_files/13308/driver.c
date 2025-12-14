#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4430232558780311836LL;
unsigned int var_4 = 161451419U;
int var_9 = -749461658;
unsigned long long int var_10 = 6698902782874696219ULL;
unsigned int var_11 = 2808878801U;
unsigned long long int var_18 = 15020824761102242981ULL;
int zero = 0;
unsigned int var_19 = 1071323358U;
unsigned int var_20 = 835251299U;
void init() {
}

void checksum() {
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
