#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8485995012409881598ULL;
unsigned int var_3 = 3282736272U;
unsigned int var_4 = 1900735430U;
long long int var_5 = 1533702242237954967LL;
unsigned short var_6 = (unsigned short)44733;
_Bool var_8 = (_Bool)0;
short var_12 = (short)30221;
short var_15 = (short)13988;
int var_16 = -601821372;
unsigned int var_18 = 2279885098U;
int zero = 0;
int var_19 = -793524690;
short var_20 = (short)2134;
unsigned long long int var_21 = 1603958321168338084ULL;
short var_22 = (short)-3144;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
