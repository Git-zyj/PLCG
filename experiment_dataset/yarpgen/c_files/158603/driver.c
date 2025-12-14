#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-3662;
short var_7 = (short)30400;
unsigned short var_8 = (unsigned short)35368;
short var_10 = (short)-24691;
unsigned int var_12 = 577630453U;
unsigned short var_14 = (unsigned short)52148;
long long int var_15 = -8786356739580042573LL;
int zero = 0;
unsigned short var_17 = (unsigned short)40953;
unsigned short var_18 = (unsigned short)22096;
unsigned int var_19 = 4064000512U;
void init() {
}

void checksum() {
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
