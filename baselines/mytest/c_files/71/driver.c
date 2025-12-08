#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2293713580U;
unsigned long long int var_2 = 12402432899396072290ULL;
signed char var_5 = (signed char)-65;
int var_8 = 1043402778;
unsigned long long int var_13 = 5346650779704170135ULL;
int zero = 0;
int var_14 = 2108350161;
signed char var_15 = (signed char)-22;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
