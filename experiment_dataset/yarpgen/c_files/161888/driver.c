#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13730671472981774185ULL;
unsigned int var_7 = 2323877040U;
unsigned short var_11 = (unsigned short)18642;
unsigned int var_14 = 790785027U;
int zero = 0;
signed char var_15 = (signed char)-80;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)134;
signed char var_18 = (signed char)-56;
void init() {
}

void checksum() {
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
