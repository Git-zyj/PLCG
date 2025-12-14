#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7645;
_Bool var_1 = (_Bool)1;
int var_2 = -663231436;
short var_4 = (short)-23130;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 706850843U;
unsigned long long int var_8 = 10813729127539516001ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)132;
unsigned int var_16 = 3366325968U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
