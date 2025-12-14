#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31081;
unsigned char var_2 = (unsigned char)116;
int var_3 = 1013014304;
short var_6 = (short)-24378;
unsigned char var_8 = (unsigned char)240;
int var_9 = 1770670578;
unsigned long long int var_10 = 17820412080966303648ULL;
int var_11 = -989959997;
int var_12 = 1469078424;
signed char var_13 = (signed char)-14;
int zero = 0;
unsigned short var_19 = (unsigned short)7351;
unsigned long long int var_20 = 86845176114118833ULL;
unsigned int var_21 = 3443259819U;
short var_22 = (short)-10566;
void init() {
}

void checksum() {
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
