#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1950;
_Bool var_2 = (_Bool)0;
signed char var_8 = (signed char)106;
int zero = 0;
unsigned char var_15 = (unsigned char)202;
unsigned char var_16 = (unsigned char)232;
short var_17 = (short)-7973;
signed char var_18 = (signed char)-97;
unsigned int var_19 = 3631746690U;
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
