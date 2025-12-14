#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10833;
unsigned long long int var_10 = 1952187014798616544ULL;
unsigned long long int var_15 = 14138169904575658659ULL;
unsigned long long int var_16 = 10602641195465608566ULL;
int var_17 = 460969058;
int zero = 0;
signed char var_18 = (signed char)85;
signed char var_19 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
