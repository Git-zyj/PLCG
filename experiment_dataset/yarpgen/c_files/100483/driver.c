#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)76;
unsigned long long int var_4 = 13004027577814310758ULL;
unsigned short var_6 = (unsigned short)8377;
int zero = 0;
unsigned long long int var_15 = 17274003729271805936ULL;
unsigned long long int var_16 = 16860166777006245651ULL;
unsigned short var_17 = (unsigned short)42265;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
