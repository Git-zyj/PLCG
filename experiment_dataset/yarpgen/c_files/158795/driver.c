#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1920663760;
short var_1 = (short)-8125;
unsigned short var_2 = (unsigned short)60790;
int var_7 = 839036008;
unsigned char var_12 = (unsigned char)94;
unsigned short var_15 = (unsigned short)65327;
int zero = 0;
long long int var_16 = -878803073087170816LL;
long long int var_17 = 1722047763565137520LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
