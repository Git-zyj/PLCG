#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7791;
short var_3 = (short)28909;
unsigned short var_4 = (unsigned short)5018;
int var_9 = 1782726857;
unsigned long long int var_10 = 239614292087000059ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2289373952U;
short var_14 = (short)-19404;
unsigned char var_15 = (unsigned char)172;
int zero = 0;
unsigned short var_17 = (unsigned short)7195;
int var_18 = -553383849;
void init() {
}

void checksum() {
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
