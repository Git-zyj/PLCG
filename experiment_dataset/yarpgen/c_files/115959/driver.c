#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1572296111;
unsigned long long int var_16 = 12530980008974818766ULL;
int zero = 0;
unsigned int var_17 = 3671927692U;
unsigned int var_18 = 2358703309U;
unsigned short var_19 = (unsigned short)18518;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
