#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2080303838;
unsigned char var_2 = (unsigned char)109;
unsigned char var_3 = (unsigned char)63;
unsigned char var_4 = (unsigned char)185;
int var_6 = -172695003;
unsigned int var_10 = 1498440960U;
int var_14 = 922139384;
unsigned short var_15 = (unsigned short)6335;
int zero = 0;
unsigned short var_17 = (unsigned short)26648;
long long int var_18 = -102839124327540791LL;
unsigned int var_19 = 1253808902U;
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
