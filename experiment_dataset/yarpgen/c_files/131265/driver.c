#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13546149083840464956ULL;
signed char var_9 = (signed char)-65;
unsigned long long int var_11 = 11909797396424017758ULL;
signed char var_13 = (signed char)-30;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17795327252217314861ULL;
void init() {
}

void checksum() {
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
