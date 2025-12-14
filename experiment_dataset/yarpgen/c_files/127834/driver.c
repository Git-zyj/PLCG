#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -23094386;
long long int var_4 = 7514156437025647244LL;
short var_8 = (short)23446;
unsigned long long int var_9 = 12534887821858896475ULL;
int zero = 0;
short var_10 = (short)30358;
unsigned long long int var_11 = 16880572289370754514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
