#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5840047621430797531ULL;
unsigned long long int var_1 = 18323661949115254010ULL;
signed char var_4 = (signed char)39;
int zero = 0;
unsigned long long int var_10 = 1015698215117702180ULL;
short var_11 = (short)21714;
short var_12 = (short)29785;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
