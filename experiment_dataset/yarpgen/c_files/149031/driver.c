#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3560389746399204494LL;
unsigned long long int var_4 = 9978628203006160825ULL;
unsigned long long int var_18 = 5604927224419239804ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
short var_20 = (short)23726;
unsigned long long int var_21 = 1273270168542933940ULL;
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
