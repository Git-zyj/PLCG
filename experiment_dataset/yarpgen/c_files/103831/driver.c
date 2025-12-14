#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17298626443214806291ULL;
unsigned long long int var_10 = 3457350634254704004ULL;
unsigned short var_12 = (unsigned short)57211;
int zero = 0;
unsigned short var_13 = (unsigned short)35256;
unsigned long long int var_14 = 6060832612876744874ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
