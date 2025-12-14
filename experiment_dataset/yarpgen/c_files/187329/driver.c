#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1185300306376757682ULL;
int var_8 = -542720571;
long long int var_9 = -8752665180254059126LL;
long long int var_12 = -4181895365547587526LL;
int zero = 0;
int var_16 = -728747565;
long long int var_17 = 1657752365662343806LL;
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
