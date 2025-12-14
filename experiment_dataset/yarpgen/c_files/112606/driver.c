#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20809;
short var_7 = (short)-24382;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3894834381080155565ULL;
signed char var_13 = (signed char)-14;
unsigned int var_14 = 994018407U;
int zero = 0;
int var_15 = 1224517532;
unsigned long long int var_16 = 15933045174331334109ULL;
unsigned long long int var_17 = 5311146280782854965ULL;
unsigned char var_18 = (unsigned char)2;
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
