#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned int var_2 = 516440270U;
signed char var_4 = (signed char)108;
short var_5 = (short)-17158;
unsigned int var_8 = 2741741791U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1274226580U;
int zero = 0;
short var_15 = (short)10160;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3383829556U;
unsigned int var_18 = 3232433877U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
