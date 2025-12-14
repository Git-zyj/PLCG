#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3696303989U;
short var_4 = (short)30461;
_Bool var_5 = (_Bool)1;
long long int var_9 = 1561931818414468037LL;
unsigned long long int var_13 = 2213279494280811160ULL;
unsigned int var_15 = 3633030783U;
unsigned int var_17 = 4047523900U;
unsigned int var_19 = 2786054154U;
int zero = 0;
unsigned long long int var_20 = 9361476514385622729ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
