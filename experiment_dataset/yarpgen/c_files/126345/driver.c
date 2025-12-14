#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9686670317505394953ULL;
signed char var_7 = (signed char)23;
unsigned int var_11 = 3595754834U;
unsigned int var_13 = 2775847618U;
int zero = 0;
long long int var_15 = 1295666959105062024LL;
long long int var_16 = -2231509385972197397LL;
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
