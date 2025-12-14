#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28754;
signed char var_2 = (signed char)116;
long long int var_3 = 2508058681630470431LL;
signed char var_4 = (signed char)-50;
long long int var_7 = -6527508237747216752LL;
unsigned long long int var_15 = 8105032194128593150ULL;
unsigned int var_17 = 2182665327U;
int zero = 0;
unsigned long long int var_20 = 10477415646004208788ULL;
signed char var_21 = (signed char)-89;
unsigned int var_22 = 2407265712U;
void init() {
}

void checksum() {
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
