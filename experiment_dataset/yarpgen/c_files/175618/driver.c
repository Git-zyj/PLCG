#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5434806072426110992LL;
long long int var_7 = 6251934442499779052LL;
short var_8 = (short)-28743;
long long int var_9 = 5857906035989929598LL;
int var_10 = -2079725621;
long long int var_12 = -779712332029393073LL;
long long int var_13 = 7411669054252727820LL;
int zero = 0;
long long int var_14 = -4722630429208299258LL;
unsigned char var_15 = (unsigned char)26;
short var_16 = (short)19168;
unsigned int var_17 = 1630471109U;
long long int var_18 = -9045657901591404817LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
