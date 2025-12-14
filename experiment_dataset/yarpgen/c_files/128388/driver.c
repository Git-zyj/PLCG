#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6922700733323972854ULL;
unsigned short var_1 = (unsigned short)2446;
long long int var_11 = -5222389019657841410LL;
int zero = 0;
int var_19 = 1528273655;
unsigned long long int var_20 = 14384882445068865529ULL;
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
