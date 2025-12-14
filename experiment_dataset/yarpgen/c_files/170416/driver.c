#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 305714108;
unsigned short var_9 = (unsigned short)15745;
short var_10 = (short)-7421;
int zero = 0;
unsigned int var_12 = 3202202671U;
int var_13 = -444124107;
int var_14 = 1125774352;
unsigned long long int var_15 = 13552754698817971745ULL;
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
