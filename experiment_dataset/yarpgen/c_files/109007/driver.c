#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3234276222U;
unsigned long long int var_5 = 15592173255114562314ULL;
short var_8 = (short)7648;
unsigned int var_9 = 3351775199U;
short var_13 = (short)31811;
long long int var_15 = -4106355634427617030LL;
signed char var_16 = (signed char)3;
int var_17 = -1689948811;
signed char var_18 = (signed char)-7;
int zero = 0;
int var_19 = 1291837412;
short var_20 = (short)-6556;
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
