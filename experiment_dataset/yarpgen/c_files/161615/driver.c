#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned long long int var_2 = 587571272736377863ULL;
unsigned int var_7 = 2760441677U;
signed char var_8 = (signed char)32;
short var_10 = (short)-32746;
short var_12 = (short)8479;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 714264398U;
unsigned char var_18 = (unsigned char)102;
unsigned char var_19 = (unsigned char)162;
int var_20 = -435867200;
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
