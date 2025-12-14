#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2350;
unsigned long long int var_1 = 15310385183166819041ULL;
short var_4 = (short)-30047;
unsigned char var_5 = (unsigned char)238;
unsigned long long int var_6 = 8063123530164207292ULL;
unsigned long long int var_10 = 12647888136919139976ULL;
short var_14 = (short)-21427;
int zero = 0;
long long int var_15 = 4809778488923668671LL;
short var_16 = (short)10277;
short var_17 = (short)-13172;
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
