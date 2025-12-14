#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 229281930U;
unsigned long long int var_4 = 5579959024562169136ULL;
long long int var_6 = 6696996815391381554LL;
int zero = 0;
unsigned int var_15 = 4072333344U;
long long int var_16 = 7517590721751389003LL;
unsigned int var_17 = 227388737U;
unsigned int var_18 = 2710629089U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
