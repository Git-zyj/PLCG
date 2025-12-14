#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1138163756;
int var_2 = 1911576641;
long long int var_3 = 8492098712049354378LL;
signed char var_5 = (signed char)-18;
long long int var_6 = 5965362656239660141LL;
long long int var_12 = 7580021130648493643LL;
int zero = 0;
int var_16 = 1714607558;
signed char var_17 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
