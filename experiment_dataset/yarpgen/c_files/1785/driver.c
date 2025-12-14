#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-11;
int var_2 = -793548430;
signed char var_3 = (signed char)90;
unsigned char var_5 = (unsigned char)163;
unsigned int var_6 = 3166739234U;
_Bool var_7 = (_Bool)0;
int var_8 = -1580780175;
int var_9 = 2134862996;
signed char var_12 = (signed char)31;
unsigned int var_13 = 1924597921U;
int zero = 0;
short var_14 = (short)-22870;
int var_15 = -1829349963;
int var_16 = 1126744298;
signed char var_17 = (signed char)-62;
signed char var_18 = (signed char)-122;
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
