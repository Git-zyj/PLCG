#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1035345634U;
unsigned long long int var_3 = 536081688460705269ULL;
unsigned int var_4 = 3541732289U;
int zero = 0;
unsigned short var_15 = (unsigned short)27208;
unsigned long long int var_16 = 13835944887336488551ULL;
unsigned short var_17 = (unsigned short)37802;
unsigned short var_18 = (unsigned short)25685;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
