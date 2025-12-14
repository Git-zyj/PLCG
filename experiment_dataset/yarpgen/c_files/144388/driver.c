#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-27;
int var_4 = 613173126;
signed char var_9 = (signed char)-41;
int var_11 = -1439100110;
short var_14 = (short)1338;
short var_15 = (short)3472;
int zero = 0;
int var_16 = 595249645;
int var_17 = -642320169;
unsigned int var_18 = 3733660372U;
int var_19 = -7020201;
void init() {
}

void checksum() {
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
