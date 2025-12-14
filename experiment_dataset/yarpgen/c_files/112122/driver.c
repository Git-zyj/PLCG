#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14416870024476824114ULL;
unsigned char var_3 = (unsigned char)233;
unsigned char var_4 = (unsigned char)90;
long long int var_5 = -3773432730662762208LL;
int var_7 = 1848151073;
unsigned long long int var_11 = 2136623021123625299ULL;
int zero = 0;
unsigned int var_12 = 344289769U;
unsigned long long int var_13 = 14356118844901332930ULL;
int var_14 = -101091703;
unsigned int var_15 = 2467881878U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
