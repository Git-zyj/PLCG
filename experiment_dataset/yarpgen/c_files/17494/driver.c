#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6133116458162329421ULL;
short var_1 = (short)-4660;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16385364641491724329ULL;
unsigned long long int var_7 = 1426592675538582675ULL;
unsigned long long int var_9 = 15311196879495682114ULL;
unsigned short var_10 = (unsigned short)13516;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8568828339758124889LL;
short var_15 = (short)12552;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
