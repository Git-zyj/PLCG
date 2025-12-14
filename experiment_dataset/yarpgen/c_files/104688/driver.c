#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7435733342049670864LL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-27642;
short var_9 = (short)-19848;
long long int var_13 = 1721526399517720023LL;
int zero = 0;
long long int var_15 = -7475503204843364025LL;
unsigned long long int var_16 = 15249517847429498463ULL;
short var_17 = (short)-19786;
void init() {
}

void checksum() {
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
