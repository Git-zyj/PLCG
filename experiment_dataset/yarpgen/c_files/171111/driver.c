#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
int var_2 = 1208236437;
short var_3 = (short)-15449;
unsigned int var_4 = 1258380601U;
short var_5 = (short)17903;
short var_8 = (short)17308;
int var_11 = -51564382;
signed char var_13 = (signed char)-63;
int zero = 0;
signed char var_14 = (signed char)64;
int var_15 = 1624312408;
short var_16 = (short)-7981;
void init() {
}

void checksum() {
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
