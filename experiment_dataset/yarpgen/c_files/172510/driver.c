#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13285300434277844883ULL;
int var_1 = 1366171183;
signed char var_3 = (signed char)-107;
int var_5 = -980837438;
unsigned long long int var_7 = 14764666079607015810ULL;
unsigned int var_9 = 3185523497U;
unsigned long long int var_10 = 576351778852536563ULL;
int zero = 0;
unsigned int var_11 = 3132491204U;
unsigned long long int var_12 = 6067620225765562401ULL;
unsigned long long int var_13 = 1516781603793682050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
