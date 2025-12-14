#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2775844229U;
long long int var_6 = -846236033557621162LL;
unsigned int var_9 = 2751510570U;
int var_17 = 1875190778;
int zero = 0;
int var_20 = 168756792;
long long int var_21 = 6107109876085620773LL;
int var_22 = 2128038400;
long long int var_23 = 2547308446094614128LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
