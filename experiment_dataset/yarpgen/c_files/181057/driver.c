#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -382777257;
long long int var_15 = 4331842923751631303LL;
unsigned long long int var_19 = 17344739549222284766ULL;
int zero = 0;
signed char var_20 = (signed char)-63;
short var_21 = (short)12938;
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
