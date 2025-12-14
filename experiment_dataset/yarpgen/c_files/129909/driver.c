#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23878;
signed char var_4 = (signed char)22;
unsigned short var_6 = (unsigned short)28498;
short var_7 = (short)-12523;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 16666417743867674694ULL;
unsigned int var_11 = 1147702050U;
int var_12 = -893470323;
unsigned int var_13 = 2600861092U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
