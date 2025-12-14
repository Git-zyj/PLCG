#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25574;
short var_1 = (short)18346;
unsigned int var_3 = 3650747910U;
unsigned int var_5 = 3758465871U;
short var_7 = (short)-13036;
unsigned int var_8 = 4146117106U;
short var_11 = (short)-22576;
unsigned short var_14 = (unsigned short)16475;
short var_16 = (short)8998;
unsigned short var_18 = (unsigned short)37050;
int zero = 0;
short var_19 = (short)31896;
unsigned int var_20 = 2214914713U;
void init() {
}

void checksum() {
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
