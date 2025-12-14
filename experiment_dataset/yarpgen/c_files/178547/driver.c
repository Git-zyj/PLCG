#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1926759899;
unsigned int var_3 = 1713018801U;
int var_12 = -620773863;
int zero = 0;
unsigned int var_13 = 2416057921U;
unsigned short var_14 = (unsigned short)9795;
long long int var_15 = -7123286286008264379LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
