#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1353562038;
unsigned long long int var_3 = 12549433552846124348ULL;
short var_5 = (short)-17714;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2359030497U;
short var_10 = (short)-7256;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
unsigned long long int var_15 = 7958061896972632632ULL;
signed char var_16 = (signed char)85;
short var_17 = (short)-3032;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
