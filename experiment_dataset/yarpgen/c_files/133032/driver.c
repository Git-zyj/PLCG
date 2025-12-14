#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
long long int var_1 = -5414868514011514341LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-42;
unsigned short var_5 = (unsigned short)5405;
signed char var_9 = (signed char)23;
int var_10 = 640863899;
int var_11 = 1263472137;
unsigned short var_12 = (unsigned short)58408;
unsigned short var_13 = (unsigned short)24872;
unsigned char var_14 = (unsigned char)159;
int zero = 0;
short var_16 = (short)-31692;
unsigned short var_17 = (unsigned short)48485;
signed char var_18 = (signed char)-75;
unsigned short var_19 = (unsigned short)1579;
int var_20 = 197838537;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
