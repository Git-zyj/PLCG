#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 313273208U;
short var_7 = (short)11517;
int zero = 0;
unsigned int var_15 = 1628226338U;
unsigned long long int var_16 = 13860480740663940190ULL;
unsigned short var_17 = (unsigned short)3089;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
