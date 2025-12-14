#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1951728056U;
long long int var_2 = 3214901162249110515LL;
short var_9 = (short)23678;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1985738339423076073LL;
int zero = 0;
short var_14 = (short)7973;
long long int var_15 = -3350628226583716859LL;
unsigned int var_16 = 348550011U;
long long int var_17 = -8828674033762040596LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
