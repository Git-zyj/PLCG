#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17223;
int var_3 = -1443919114;
unsigned int var_4 = 3966353861U;
int var_5 = -733691384;
unsigned int var_7 = 4108018098U;
_Bool var_8 = (_Bool)0;
int var_14 = -486333960;
unsigned char var_15 = (unsigned char)41;
int zero = 0;
unsigned short var_17 = (unsigned short)35606;
signed char var_18 = (signed char)35;
long long int var_19 = -9185151395171444070LL;
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
