#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1435414319;
short var_1 = (short)-2469;
short var_2 = (short)29171;
signed char var_3 = (signed char)-10;
_Bool var_5 = (_Bool)0;
long long int var_9 = 1403203458959417107LL;
unsigned int var_11 = 3455885429U;
unsigned char var_12 = (unsigned char)164;
unsigned int var_13 = 2561995448U;
int zero = 0;
unsigned int var_16 = 115822596U;
short var_17 = (short)-7036;
unsigned short var_18 = (unsigned short)25001;
void init() {
}

void checksum() {
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
