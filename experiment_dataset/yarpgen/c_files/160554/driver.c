#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1223283356U;
long long int var_10 = 6012067078447302248LL;
unsigned short var_11 = (unsigned short)49316;
unsigned int var_13 = 3853862944U;
int zero = 0;
signed char var_15 = (signed char)-20;
long long int var_16 = -6344735659319986114LL;
void init() {
}

void checksum() {
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
