#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-4216;
unsigned long long int var_18 = 15348253108004834846ULL;
unsigned int var_19 = 3357300308U;
int zero = 0;
unsigned int var_20 = 852056420U;
short var_21 = (short)-6855;
void init() {
}

void checksum() {
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
