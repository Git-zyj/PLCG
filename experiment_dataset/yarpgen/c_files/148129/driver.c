#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1113958112103056773LL;
short var_5 = (short)19064;
unsigned int var_17 = 2478127625U;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
unsigned int var_21 = 4184034562U;
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
