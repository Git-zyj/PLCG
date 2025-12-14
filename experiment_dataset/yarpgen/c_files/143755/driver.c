#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40267;
int var_2 = 1558583672;
int var_3 = -943080090;
unsigned int var_4 = 2491186822U;
int var_5 = -2073549739;
int var_7 = -1717017449;
unsigned short var_10 = (unsigned short)1113;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7230130899079933771ULL;
signed char var_15 = (signed char)-124;
unsigned long long int var_16 = 14527495944946500882ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
