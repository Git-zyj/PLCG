#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15572705470201412881ULL;
unsigned long long int var_15 = 6730937570319162540ULL;
int zero = 0;
short var_19 = (short)-32118;
unsigned short var_20 = (unsigned short)4287;
unsigned long long int var_21 = 17360908038924305038ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
