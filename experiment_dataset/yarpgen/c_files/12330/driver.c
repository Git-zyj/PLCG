#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3450944666861525607ULL;
unsigned long long int var_6 = 5201521470420634882ULL;
int zero = 0;
int var_12 = -359771116;
unsigned long long int var_13 = 8340130550377635435ULL;
unsigned short var_14 = (unsigned short)64308;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
