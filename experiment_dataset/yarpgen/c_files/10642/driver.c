#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13138684990271342733ULL;
short var_3 = (short)23933;
short var_11 = (short)-10291;
short var_15 = (short)2241;
int zero = 0;
unsigned short var_16 = (unsigned short)38794;
unsigned int var_17 = 907255979U;
unsigned long long int var_18 = 17348394248486755418ULL;
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
