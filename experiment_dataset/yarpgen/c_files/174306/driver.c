#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29738;
short var_1 = (short)28285;
long long int var_2 = 7526094748700613452LL;
unsigned int var_3 = 2677422462U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 736599307U;
int zero = 0;
short var_10 = (short)30996;
short var_11 = (short)-25975;
unsigned short var_12 = (unsigned short)7565;
_Bool var_13 = (_Bool)0;
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
