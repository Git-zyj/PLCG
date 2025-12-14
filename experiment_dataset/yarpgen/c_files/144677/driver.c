#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3724672026U;
unsigned int var_9 = 2007474596U;
unsigned int var_10 = 1167130263U;
long long int var_11 = 6022950764357160746LL;
int zero = 0;
unsigned long long int var_13 = 6593669748274098186ULL;
unsigned long long int var_14 = 7819177689059130085ULL;
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
