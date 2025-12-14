#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6922;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)30504;
unsigned int var_7 = 3029309599U;
int var_9 = 1095587118;
unsigned long long int var_10 = 5151592891687030357ULL;
unsigned char var_11 = (unsigned char)24;
unsigned short var_12 = (unsigned short)25977;
int zero = 0;
unsigned short var_13 = (unsigned short)3060;
signed char var_14 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
