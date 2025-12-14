#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4805490506717201931ULL;
unsigned long long int var_4 = 15805010317843687007ULL;
unsigned char var_7 = (unsigned char)152;
long long int var_10 = 4383915863615201724LL;
unsigned short var_13 = (unsigned short)17962;
signed char var_15 = (signed char)-26;
int zero = 0;
signed char var_16 = (signed char)45;
int var_17 = -1032408338;
short var_18 = (short)342;
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
