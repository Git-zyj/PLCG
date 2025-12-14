#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24865;
_Bool var_1 = (_Bool)1;
unsigned int var_5 = 3630510791U;
short var_8 = (short)17887;
unsigned int var_10 = 3316856923U;
unsigned char var_12 = (unsigned char)18;
unsigned char var_15 = (unsigned char)59;
unsigned long long int var_17 = 9898667780079161782ULL;
int zero = 0;
short var_19 = (short)4278;
unsigned long long int var_20 = 14365001757111552124ULL;
int var_21 = -2002755114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
