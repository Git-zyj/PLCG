#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2521852387U;
unsigned short var_3 = (unsigned short)9363;
signed char var_4 = (signed char)-12;
int var_6 = 1594074721;
unsigned short var_8 = (unsigned short)44855;
unsigned long long int var_11 = 5211532644431443333ULL;
int zero = 0;
signed char var_13 = (signed char)1;
unsigned short var_14 = (unsigned short)42292;
unsigned int var_15 = 669666853U;
unsigned int var_16 = 2936384484U;
unsigned short var_17 = (unsigned short)15838;
unsigned int var_18 = 2630216876U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
