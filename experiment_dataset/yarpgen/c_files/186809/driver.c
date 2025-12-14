#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)18598;
unsigned long long int var_14 = 7432767915298261612ULL;
int zero = 0;
unsigned long long int var_16 = 17094826071683701418ULL;
unsigned long long int var_17 = 710131299121551913ULL;
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
