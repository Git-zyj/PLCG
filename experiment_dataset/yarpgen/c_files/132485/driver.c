#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8279843450932726485ULL;
unsigned int var_10 = 4134320715U;
unsigned long long int var_11 = 16492364477868599896ULL;
short var_17 = (short)-22918;
unsigned long long int var_18 = 17109122089144256742ULL;
int zero = 0;
int var_19 = -1535507020;
unsigned long long int var_20 = 1659156392434608082ULL;
void init() {
}

void checksum() {
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
