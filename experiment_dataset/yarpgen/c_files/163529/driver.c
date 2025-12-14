#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10765530334671768722ULL;
long long int var_5 = 4099554033462803217LL;
long long int var_6 = -1643887889445205889LL;
short var_7 = (short)17452;
int var_12 = 1079776484;
int var_16 = 966953094;
short var_19 = (short)-47;
int zero = 0;
int var_20 = 278712184;
unsigned long long int var_21 = 13151595286820061776ULL;
long long int var_22 = 542666846329770908LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
