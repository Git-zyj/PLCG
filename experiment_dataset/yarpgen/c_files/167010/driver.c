#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17461401077222665441ULL;
unsigned long long int var_9 = 13779153641580819269ULL;
short var_10 = (short)-22833;
unsigned long long int var_12 = 2949144720751610305ULL;
int zero = 0;
unsigned int var_13 = 2057808670U;
unsigned long long int var_14 = 4764569150140291566ULL;
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
