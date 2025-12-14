#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3592;
short var_3 = (short)-21725;
unsigned short var_4 = (unsigned short)363;
long long int var_6 = -9025090702308933216LL;
signed char var_7 = (signed char)127;
unsigned long long int var_10 = 2608314513826139361ULL;
unsigned long long int var_11 = 18063402781117238211ULL;
int var_13 = 1363871411;
long long int var_15 = 6564806233368411920LL;
short var_16 = (short)27301;
unsigned long long int var_17 = 4878546394969019441ULL;
int zero = 0;
int var_18 = -1779362356;
unsigned long long int var_19 = 12117163899334996198ULL;
int var_20 = 373097970;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
