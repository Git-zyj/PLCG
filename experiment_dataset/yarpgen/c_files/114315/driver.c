#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16245448712106186075ULL;
unsigned short var_7 = (unsigned short)61834;
int var_10 = -1460087854;
int zero = 0;
signed char var_15 = (signed char)-98;
unsigned long long int var_16 = 5692280320004031099ULL;
int var_17 = -122218999;
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
