#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29294;
int var_5 = 1630463372;
long long int var_11 = -3620704068810905980LL;
int var_15 = -1167909514;
int zero = 0;
long long int var_18 = -3851112705524989805LL;
unsigned int var_19 = 2900261013U;
void init() {
}

void checksum() {
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
