#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20751;
unsigned short var_7 = (unsigned short)27990;
signed char var_11 = (signed char)96;
int zero = 0;
short var_16 = (short)-23757;
unsigned short var_17 = (unsigned short)34589;
long long int var_18 = 3177565222063931384LL;
unsigned short var_19 = (unsigned short)38168;
unsigned long long int var_20 = 6254793755967831466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
