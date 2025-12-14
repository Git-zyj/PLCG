#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
long long int var_2 = -5072766155066902051LL;
unsigned short var_4 = (unsigned short)63005;
long long int var_13 = 2373447849750121144LL;
unsigned long long int var_14 = 17654108943709890279ULL;
int zero = 0;
unsigned long long int var_15 = 13860966876300074110ULL;
long long int var_16 = -3395383301928487949LL;
unsigned char var_17 = (unsigned char)80;
unsigned long long int var_18 = 15040690235396019418ULL;
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
