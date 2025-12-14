#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2094048910030961328LL;
long long int var_2 = -4102138540525610387LL;
long long int var_6 = -5560801249338210723LL;
int zero = 0;
long long int var_14 = -695729699136074221LL;
long long int var_15 = -330992326440432645LL;
long long int var_16 = -2323555256704527664LL;
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
