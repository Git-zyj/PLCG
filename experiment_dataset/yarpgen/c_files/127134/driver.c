#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1727557094U;
unsigned long long int var_2 = 4932068871030736641ULL;
unsigned short var_8 = (unsigned short)43942;
signed char var_10 = (signed char)-63;
unsigned long long int var_11 = 8616986497174778145ULL;
signed char var_13 = (signed char)84;
short var_14 = (short)-23702;
unsigned int var_15 = 31244849U;
unsigned int var_16 = 3147957389U;
unsigned short var_17 = (unsigned short)50332;
int zero = 0;
short var_18 = (short)-32213;
short var_19 = (short)-11380;
signed char var_20 = (signed char)109;
unsigned int var_21 = 3709657418U;
unsigned int var_22 = 3444072347U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
