#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2029081328;
unsigned long long int var_8 = 13570102606718154617ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 4880572382362279462ULL;
short var_15 = (short)16191;
int var_16 = 1710808399;
int zero = 0;
unsigned long long int var_17 = 5410003045745587217ULL;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
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
