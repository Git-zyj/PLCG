#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2049622327;
unsigned char var_6 = (unsigned char)75;
unsigned long long int var_11 = 16834077763929772401ULL;
int zero = 0;
unsigned long long int var_14 = 5426858832439225964ULL;
long long int var_15 = 8839439141938947368LL;
void init() {
}

void checksum() {
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
