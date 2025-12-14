#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-47;
signed char var_11 = (signed char)49;
short var_14 = (short)24541;
int var_15 = -1559055380;
long long int var_16 = 4322912096239477376LL;
int zero = 0;
unsigned int var_17 = 798660191U;
short var_18 = (short)-32032;
unsigned int var_19 = 3489279552U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
