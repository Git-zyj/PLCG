#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7949717353021186168LL;
unsigned short var_1 = (unsigned short)35174;
unsigned char var_2 = (unsigned char)59;
long long int var_3 = -5957304402517314771LL;
unsigned long long int var_5 = 18318846744800701341ULL;
int var_6 = 323170945;
int var_7 = 1862608338;
unsigned int var_8 = 2627361040U;
short var_9 = (short)-4351;
unsigned long long int var_10 = 6355090563862728818ULL;
int zero = 0;
unsigned int var_11 = 3305157910U;
long long int var_12 = 9083979527215880538LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
