#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1343343906;
unsigned short var_1 = (unsigned short)33664;
unsigned long long int var_2 = 18067266546892706921ULL;
unsigned int var_4 = 1024034131U;
int zero = 0;
int var_14 = 905630501;
int var_15 = -1179374328;
int var_16 = 1897917529;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
