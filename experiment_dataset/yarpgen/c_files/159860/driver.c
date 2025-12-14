#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8721313543002057024LL;
unsigned short var_2 = (unsigned short)37096;
int var_16 = -484521742;
int zero = 0;
signed char var_17 = (signed char)90;
long long int var_18 = -5291875979176642340LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
