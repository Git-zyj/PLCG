#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7825491308964445451LL;
unsigned int var_13 = 3462882425U;
int zero = 0;
int var_16 = 1196503739;
long long int var_17 = 4429537649665717820LL;
unsigned long long int var_18 = 4341008217884137629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
