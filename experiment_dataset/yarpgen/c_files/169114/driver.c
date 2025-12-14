#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
long long int var_1 = 6104792364165461917LL;
signed char var_4 = (signed char)82;
long long int var_10 = 5281917428922972775LL;
unsigned char var_11 = (unsigned char)40;
long long int var_14 = 4606309760195164246LL;
unsigned char var_16 = (unsigned char)191;
int zero = 0;
long long int var_17 = -3838700665725465488LL;
short var_18 = (short)23776;
void init() {
}

void checksum() {
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
