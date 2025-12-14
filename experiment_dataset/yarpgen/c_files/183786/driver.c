#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)67;
unsigned short var_7 = (unsigned short)33159;
int var_10 = -225970495;
_Bool var_11 = (_Bool)1;
short var_12 = (short)27058;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-21330;
int zero = 0;
int var_16 = -562144248;
unsigned char var_17 = (unsigned char)153;
int var_18 = 2000044390;
unsigned char var_19 = (unsigned char)212;
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
