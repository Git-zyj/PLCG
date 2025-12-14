#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 914732952154678455LL;
long long int var_17 = -8640019260187134324LL;
long long int var_18 = -3907067256559844916LL;
int zero = 0;
long long int var_19 = 8672696396618429048LL;
int var_20 = -1238979789;
unsigned char var_21 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
