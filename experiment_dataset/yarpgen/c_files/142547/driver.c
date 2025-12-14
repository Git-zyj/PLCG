#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8238741913868749535ULL;
unsigned short var_2 = (unsigned short)31733;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)48;
int var_7 = 2108240950;
unsigned long long int var_9 = 778252218003879977ULL;
short var_11 = (short)23394;
short var_12 = (short)-4421;
unsigned char var_13 = (unsigned char)224;
unsigned int var_14 = 4227442469U;
int zero = 0;
unsigned short var_15 = (unsigned short)56220;
int var_16 = 1920598853;
int var_17 = 1045843674;
short var_18 = (short)-23005;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
