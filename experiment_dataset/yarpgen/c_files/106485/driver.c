#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2641594890U;
int var_3 = 603428714;
int var_6 = 1614652013;
unsigned long long int var_7 = 1421078331831234568ULL;
unsigned int var_9 = 651464130U;
short var_11 = (short)-28603;
signed char var_12 = (signed char)-70;
short var_14 = (short)-28499;
long long int var_15 = 7289101624470005254LL;
int zero = 0;
long long int var_18 = 1350119219169738385LL;
short var_19 = (short)-30059;
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
