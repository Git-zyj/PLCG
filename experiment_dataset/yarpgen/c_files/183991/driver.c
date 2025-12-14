#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1371319814;
signed char var_6 = (signed char)-21;
unsigned long long int var_9 = 16088641228820733090ULL;
unsigned long long int var_11 = 10084732748524653927ULL;
int var_14 = -868702101;
int zero = 0;
signed char var_15 = (signed char)24;
long long int var_16 = 2717324319090941660LL;
unsigned long long int var_17 = 10247697633108748996ULL;
short var_18 = (short)-13498;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
