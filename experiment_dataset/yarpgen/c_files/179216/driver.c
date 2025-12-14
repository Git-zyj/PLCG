#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15664696246189007133ULL;
unsigned long long int var_1 = 12288065902483110815ULL;
unsigned long long int var_8 = 6654163156189541672ULL;
unsigned long long int var_9 = 4784371359824309656ULL;
unsigned long long int var_14 = 1359326886980712645ULL;
unsigned long long int var_15 = 15752935265705252709ULL;
int zero = 0;
unsigned long long int var_17 = 16050679209383787065ULL;
unsigned long long int var_18 = 1701268707354757735ULL;
unsigned long long int var_19 = 10881031233041017956ULL;
unsigned long long int var_20 = 4249602966188117643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
