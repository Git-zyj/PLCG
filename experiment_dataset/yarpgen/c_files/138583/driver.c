#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1202180635224831947ULL;
unsigned int var_12 = 160543131U;
int zero = 0;
unsigned short var_13 = (unsigned short)57599;
int var_14 = -1205222474;
unsigned short var_15 = (unsigned short)59380;
void init() {
}

void checksum() {
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
