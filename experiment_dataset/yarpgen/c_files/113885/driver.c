#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1619328633U;
signed char var_1 = (signed char)47;
unsigned char var_2 = (unsigned char)54;
short var_3 = (short)-3911;
unsigned int var_4 = 538027977U;
signed char var_5 = (signed char)117;
signed char var_6 = (signed char)33;
short var_8 = (short)22701;
signed char var_9 = (signed char)90;
signed char var_10 = (signed char)-56;
signed char var_11 = (signed char)-95;
int var_12 = 1619519448;
unsigned int var_15 = 1232061906U;
int zero = 0;
unsigned int var_16 = 3514636238U;
short var_17 = (short)11320;
unsigned int var_18 = 121479241U;
int var_19 = 1025809491;
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
