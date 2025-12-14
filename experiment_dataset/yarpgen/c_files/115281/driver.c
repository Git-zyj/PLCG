#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -8670038955212447427LL;
int var_13 = 2104383529;
short var_14 = (short)28747;
int zero = 0;
long long int var_15 = -3103003532619403637LL;
unsigned long long int var_16 = 8622868658309466991ULL;
unsigned short var_17 = (unsigned short)21293;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
