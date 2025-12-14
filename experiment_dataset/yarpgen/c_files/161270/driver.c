#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17526227684899477875ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12956789886513771398ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)6440;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
signed char var_18 = (signed char)-48;
unsigned long long int var_19 = 11722921244830312398ULL;
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
