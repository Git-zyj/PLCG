#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26901;
int var_15 = -1955493365;
int zero = 0;
unsigned int var_17 = 1853578204U;
unsigned long long int var_18 = 11631739595438306517ULL;
unsigned long long int var_19 = 16533917633356562979ULL;
signed char var_20 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
