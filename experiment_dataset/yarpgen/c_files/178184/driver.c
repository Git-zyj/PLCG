#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8963859114022241017ULL;
unsigned int var_13 = 1220382924U;
short var_16 = (short)28743;
signed char var_17 = (signed char)116;
unsigned int var_18 = 3471856721U;
unsigned short var_19 = (unsigned short)30198;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6602053830763383511LL;
short var_22 = (short)-16141;
long long int var_23 = 1331428762294196891LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
