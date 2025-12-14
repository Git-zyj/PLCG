#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3052342860580639737LL;
long long int var_3 = -3519753785521336404LL;
short var_5 = (short)10158;
unsigned long long int var_8 = 1037394799266760846ULL;
long long int var_9 = -5871860376878057263LL;
int zero = 0;
short var_10 = (short)-14359;
unsigned long long int var_11 = 5619009968023606685ULL;
long long int var_12 = 185919092444208418LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
