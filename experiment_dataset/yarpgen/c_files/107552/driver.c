#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15153;
unsigned char var_1 = (unsigned char)223;
unsigned short var_5 = (unsigned short)34545;
short var_7 = (short)-22401;
unsigned int var_9 = 3221691147U;
short var_10 = (short)11632;
unsigned char var_12 = (unsigned char)40;
int zero = 0;
unsigned int var_15 = 1247970212U;
unsigned long long int var_16 = 14316734904315875127ULL;
short var_17 = (short)7583;
unsigned int var_18 = 1282206599U;
signed char var_19 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
