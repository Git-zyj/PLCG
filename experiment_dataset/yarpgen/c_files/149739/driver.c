#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1385;
int var_1 = 2076957655;
long long int var_6 = -7146336841287717320LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)101;
unsigned int var_12 = 1036158728U;
unsigned int var_14 = 3283997926U;
int zero = 0;
unsigned long long int var_16 = 6675232680333013171ULL;
unsigned short var_17 = (unsigned short)63879;
long long int var_18 = -3352226039449185293LL;
short var_19 = (short)-13317;
void init() {
}

void checksum() {
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
