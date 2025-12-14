#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9926690477436504478ULL;
signed char var_3 = (signed char)49;
unsigned long long int var_5 = 1598723998412321346ULL;
signed char var_6 = (signed char)-8;
signed char var_7 = (signed char)-75;
unsigned long long int var_9 = 825182037073701383ULL;
int zero = 0;
unsigned long long int var_11 = 3709196771117970498ULL;
unsigned long long int var_12 = 13765544093338656064ULL;
void init() {
}

void checksum() {
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
