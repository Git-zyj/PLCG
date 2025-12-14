#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 588691397U;
unsigned char var_1 = (unsigned char)225;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)34;
unsigned long long int var_7 = 15845780734369341809ULL;
unsigned short var_9 = (unsigned short)30415;
unsigned long long int var_11 = 4535248341797628894ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 6670319880918913394ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)183;
unsigned char var_18 = (unsigned char)42;
unsigned int var_19 = 3005460050U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
