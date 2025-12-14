#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2816579045U;
unsigned int var_7 = 3827920827U;
unsigned short var_9 = (unsigned short)2317;
signed char var_12 = (signed char)62;
int zero = 0;
long long int var_16 = -1490167282267352922LL;
unsigned long long int var_17 = 7318417219597375646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
