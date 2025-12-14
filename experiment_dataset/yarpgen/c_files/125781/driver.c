#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16723;
int var_8 = 973994808;
int var_10 = -919494564;
long long int var_11 = -4320422876408913719LL;
unsigned int var_14 = 18807971U;
signed char var_16 = (signed char)34;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1950265502;
unsigned int var_19 = 1243406954U;
short var_20 = (short)6518;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
