#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 206695388;
long long int var_8 = 50660441222398444LL;
int var_9 = -937566104;
short var_10 = (short)-10579;
int zero = 0;
int var_14 = 871450087;
_Bool var_15 = (_Bool)0;
int var_16 = -1744494218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
