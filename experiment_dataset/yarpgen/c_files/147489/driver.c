#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12379;
unsigned long long int var_1 = 3083184487301190188ULL;
_Bool var_3 = (_Bool)1;
int var_4 = 1008085116;
long long int var_5 = 5616606710190431615LL;
short var_6 = (short)11155;
long long int var_7 = -7907362536409921804LL;
signed char var_8 = (signed char)-95;
unsigned int var_9 = 2215681826U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14464199698537805922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
