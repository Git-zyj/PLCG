#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
short var_5 = (short)19891;
unsigned int var_7 = 2880296707U;
short var_9 = (short)28315;
unsigned short var_11 = (unsigned short)39760;
short var_12 = (short)-3849;
long long int var_15 = -3751874904062223813LL;
unsigned short var_16 = (unsigned short)45130;
unsigned int var_17 = 3384821007U;
int var_18 = -1614778155;
signed char var_19 = (signed char)73;
int zero = 0;
unsigned short var_20 = (unsigned short)16081;
int var_21 = 310350860;
signed char var_22 = (signed char)-9;
short var_23 = (short)19322;
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
