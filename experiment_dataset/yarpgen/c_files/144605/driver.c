#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
short var_1 = (short)-15274;
int var_3 = 1260963882;
signed char var_4 = (signed char)-119;
unsigned long long int var_5 = 6025757426736405467ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_12 = (unsigned short)18886;
signed char var_13 = (signed char)40;
short var_14 = (short)31481;
int zero = 0;
unsigned long long int var_15 = 5468860311281757989ULL;
long long int var_16 = -5958009770034443040LL;
int var_17 = 8239460;
short var_18 = (short)-23366;
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
