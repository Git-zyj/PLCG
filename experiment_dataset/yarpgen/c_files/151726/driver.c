#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17316549321811723708ULL;
short var_4 = (short)30432;
long long int var_5 = -8067003249264567558LL;
unsigned char var_11 = (unsigned char)166;
short var_12 = (short)14246;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)-120;
int zero = 0;
long long int var_18 = -8777573972956488549LL;
unsigned char var_19 = (unsigned char)222;
void init() {
}

void checksum() {
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
