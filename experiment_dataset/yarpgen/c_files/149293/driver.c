#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 237118584;
long long int var_8 = -9113871773494702889LL;
unsigned long long int var_9 = 7929129530329840198ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1097881175539175936ULL;
long long int var_12 = -1540544918514184361LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
