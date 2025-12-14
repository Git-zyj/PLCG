#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8854585071924461490ULL;
unsigned short var_14 = (unsigned short)10324;
int zero = 0;
unsigned long long int var_15 = 7133327745327497210ULL;
unsigned long long int var_16 = 1957216084734826104ULL;
void init() {
}

void checksum() {
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
