#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5024760755217756090ULL;
short var_3 = (short)-6453;
long long int var_11 = -8304188346275767564LL;
int zero = 0;
unsigned long long int var_17 = 17511043967948056309ULL;
int var_18 = 295344898;
void init() {
}

void checksum() {
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
