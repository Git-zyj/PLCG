#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
unsigned long long int var_7 = 2250874596429121781ULL;
long long int var_12 = 8542140001214132402LL;
int zero = 0;
long long int var_13 = 6829922346119203048LL;
unsigned int var_14 = 2591526023U;
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
