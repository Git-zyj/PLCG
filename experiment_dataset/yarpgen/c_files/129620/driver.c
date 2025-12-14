#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62999;
unsigned long long int var_2 = 12592870975825885315ULL;
short var_6 = (short)-29857;
int var_8 = 944511326;
signed char var_12 = (signed char)57;
int zero = 0;
unsigned int var_15 = 4137858150U;
signed char var_16 = (signed char)-99;
long long int var_17 = -5361536744469462887LL;
unsigned long long int var_18 = 3321228543159744704ULL;
unsigned long long int var_19 = 6508193919509408047ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
