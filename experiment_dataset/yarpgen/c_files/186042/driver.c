#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24806;
int var_2 = 1574873464;
_Bool var_3 = (_Bool)0;
long long int var_6 = -3737920506951419703LL;
unsigned int var_8 = 359763931U;
unsigned int var_12 = 2712528456U;
short var_14 = (short)16357;
long long int var_17 = -4188562923441968700LL;
int zero = 0;
long long int var_19 = 7322739976405958905LL;
long long int var_20 = 3296561819720760586LL;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
