#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9576978791388991531ULL;
long long int var_4 = -6650347857442596091LL;
short var_5 = (short)11158;
long long int var_8 = -2025678348270148174LL;
unsigned char var_10 = (unsigned char)11;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_14 = (short)3948;
unsigned long long int var_15 = 673063539864613932ULL;
short var_16 = (short)24487;
unsigned long long int var_17 = 8169616432096721557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
