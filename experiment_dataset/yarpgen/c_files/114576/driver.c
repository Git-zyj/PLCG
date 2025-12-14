#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -5156841706633320762LL;
short var_13 = (short)-22235;
int zero = 0;
long long int var_20 = 8098306079414944053LL;
short var_21 = (short)-11052;
unsigned int var_22 = 3926859049U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
