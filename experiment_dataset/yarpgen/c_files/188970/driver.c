#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-64;
unsigned int var_3 = 1198801288U;
unsigned long long int var_8 = 6083859821836754898ULL;
int var_9 = -2018655623;
long long int var_10 = -6871596257015782695LL;
unsigned int var_13 = 790026332U;
int var_16 = 1131693987;
int zero = 0;
unsigned short var_17 = (unsigned short)7192;
unsigned int var_18 = 2538523874U;
short var_19 = (short)-15560;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
