#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10007019213361217561ULL;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
unsigned int var_15 = 3375669860U;
unsigned long long int var_16 = 12795878218183171725ULL;
unsigned long long int var_17 = 16433974921813143421ULL;
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
