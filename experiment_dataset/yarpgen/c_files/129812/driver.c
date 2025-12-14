#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19996;
unsigned long long int var_9 = 13910245171047164553ULL;
long long int var_11 = -1181780794403066018LL;
long long int var_14 = -2336141668395612713LL;
int zero = 0;
unsigned char var_15 = (unsigned char)247;
unsigned int var_16 = 1382532202U;
unsigned short var_17 = (unsigned short)51149;
unsigned char var_18 = (unsigned char)64;
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
