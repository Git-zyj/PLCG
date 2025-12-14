#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25449;
signed char var_7 = (signed char)96;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 11435465774911969574ULL;
signed char var_10 = (signed char)-13;
int zero = 0;
unsigned int var_11 = 3663612705U;
unsigned long long int var_12 = 7514981093986996318ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 391557569;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
