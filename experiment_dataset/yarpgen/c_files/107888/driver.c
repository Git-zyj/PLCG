#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1400393101885540063LL;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
unsigned long long int var_17 = 7394610441868262752ULL;
unsigned long long int var_18 = 5567685092926219272ULL;
void init() {
}

void checksum() {
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
