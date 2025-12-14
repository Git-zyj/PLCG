#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3117338048U;
long long int var_4 = 5366136967324895449LL;
_Bool var_6 = (_Bool)1;
int var_8 = -2083543237;
unsigned long long int var_9 = 16629457569454077569ULL;
long long int var_10 = 5209351390971124063LL;
long long int var_12 = 5134729492715549995LL;
int zero = 0;
unsigned short var_14 = (unsigned short)54449;
long long int var_15 = -2490860095860662554LL;
short var_16 = (short)1784;
unsigned int var_17 = 2686967261U;
signed char var_18 = (signed char)108;
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
