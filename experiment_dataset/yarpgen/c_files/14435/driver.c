#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_1 = 483947881;
short var_2 = (short)-29020;
unsigned int var_6 = 4159387941U;
int var_8 = 371983325;
short var_9 = (short)9910;
short var_10 = (short)-2407;
unsigned char var_11 = (unsigned char)34;
unsigned int var_12 = 177379479U;
int zero = 0;
unsigned int var_13 = 789870711U;
unsigned long long int var_14 = 17132843075921922216ULL;
unsigned int var_15 = 2200540284U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
