#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50420;
unsigned long long int var_2 = 2614436400424563876ULL;
unsigned short var_9 = (unsigned short)4415;
signed char var_11 = (signed char)-34;
unsigned int var_12 = 2250571995U;
short var_13 = (short)7306;
int zero = 0;
short var_16 = (short)-14331;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 16955200551505937544ULL;
void init() {
}

void checksum() {
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
