#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3219;
unsigned int var_1 = 2187758446U;
unsigned short var_2 = (unsigned short)49629;
signed char var_3 = (signed char)-54;
short var_5 = (short)-21240;
short var_7 = (short)-7136;
unsigned int var_9 = 2439889166U;
short var_11 = (short)8640;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)-16763;
unsigned int var_19 = 656313541U;
unsigned int var_20 = 2485875267U;
short var_21 = (short)28740;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
