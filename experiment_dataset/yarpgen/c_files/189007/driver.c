#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13177;
unsigned long long int var_10 = 70545213700133625ULL;
signed char var_11 = (signed char)13;
unsigned int var_12 = 1589684767U;
int zero = 0;
long long int var_15 = -8200708858105688084LL;
long long int var_16 = -6942927352026001225LL;
unsigned long long int var_17 = 8220188464315226162ULL;
short var_18 = (short)15495;
unsigned int var_19 = 3935040292U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
