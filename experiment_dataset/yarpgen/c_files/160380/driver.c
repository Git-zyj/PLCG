#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned char var_2 = (unsigned char)188;
short var_6 = (short)-9974;
unsigned char var_8 = (unsigned char)86;
unsigned char var_9 = (unsigned char)222;
unsigned short var_12 = (unsigned short)2163;
unsigned int var_14 = 3108467217U;
short var_15 = (short)20319;
int zero = 0;
signed char var_16 = (signed char)-61;
int var_17 = 1969807589;
long long int var_18 = -7841008275718060165LL;
unsigned char var_19 = (unsigned char)100;
unsigned char var_20 = (unsigned char)77;
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
