#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 172364666U;
long long int var_3 = -3073526658042243540LL;
int zero = 0;
unsigned int var_16 = 246902040U;
unsigned long long int var_17 = 17756668966087294476ULL;
long long int var_18 = 3256797396998303700LL;
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
