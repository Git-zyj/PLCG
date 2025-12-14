#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3502;
unsigned char var_2 = (unsigned char)96;
unsigned char var_4 = (unsigned char)16;
short var_6 = (short)27998;
int var_11 = -1811706709;
unsigned int var_12 = 1208695713U;
_Bool var_17 = (_Bool)0;
int var_18 = -664650920;
short var_19 = (short)-13871;
int zero = 0;
unsigned int var_20 = 3235691088U;
short var_21 = (short)-17556;
signed char var_22 = (signed char)-67;
short var_23 = (short)-31370;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
