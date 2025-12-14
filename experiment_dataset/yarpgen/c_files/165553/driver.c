#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 2749242409U;
unsigned short var_4 = (unsigned short)32588;
unsigned char var_6 = (unsigned char)105;
unsigned long long int var_7 = 3836850391661722956ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)55970;
int var_12 = 766262321;
int zero = 0;
signed char var_18 = (signed char)-97;
_Bool var_19 = (_Bool)0;
short var_20 = (short)24945;
void init() {
}

void checksum() {
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
