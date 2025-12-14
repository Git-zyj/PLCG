#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-106;
long long int var_7 = -2259306017441184395LL;
unsigned short var_14 = (unsigned short)39888;
unsigned int var_16 = 1552903566U;
short var_17 = (short)740;
int zero = 0;
short var_18 = (short)-22492;
int var_19 = -2051645949;
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
