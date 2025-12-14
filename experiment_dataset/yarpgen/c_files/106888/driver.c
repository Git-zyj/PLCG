#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7339;
unsigned long long int var_5 = 6285047558725486879ULL;
short var_6 = (short)22883;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)8273;
unsigned int var_13 = 3335463273U;
short var_15 = (short)-29053;
int zero = 0;
unsigned int var_16 = 1316021052U;
short var_17 = (short)16559;
unsigned short var_18 = (unsigned short)26762;
_Bool var_19 = (_Bool)0;
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
