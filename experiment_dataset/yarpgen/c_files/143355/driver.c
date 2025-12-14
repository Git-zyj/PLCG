#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4640077643782635491LL;
unsigned int var_1 = 3330678302U;
unsigned long long int var_3 = 9542307478096987265ULL;
unsigned long long int var_6 = 12136871066041412164ULL;
unsigned long long int var_7 = 277583666968786292ULL;
short var_8 = (short)-21484;
unsigned long long int var_10 = 3026093022261001775ULL;
unsigned long long int var_12 = 17386020067257200955ULL;
long long int var_14 = -4077636372302206064LL;
long long int var_15 = -9153933190446099572LL;
int zero = 0;
unsigned int var_18 = 2760780575U;
long long int var_19 = -3398365039643886811LL;
unsigned int var_20 = 1792307746U;
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
