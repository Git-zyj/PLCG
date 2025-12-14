#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 840743397U;
unsigned short var_3 = (unsigned short)21102;
unsigned int var_5 = 3081665549U;
_Bool var_6 = (_Bool)0;
short var_11 = (short)1061;
long long int var_16 = -5831386582178816194LL;
int zero = 0;
unsigned short var_19 = (unsigned short)4626;
short var_20 = (short)19920;
void init() {
}

void checksum() {
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
