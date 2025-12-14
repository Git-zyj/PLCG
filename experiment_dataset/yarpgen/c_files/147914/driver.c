#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)40388;
signed char var_6 = (signed char)-38;
short var_7 = (short)8192;
int var_8 = 874330147;
unsigned int var_9 = 678177610U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8411583873455638739ULL;
unsigned char var_15 = (unsigned char)238;
short var_16 = (short)-32615;
int zero = 0;
int var_17 = 526649772;
unsigned short var_18 = (unsigned short)48254;
short var_19 = (short)-25378;
short var_20 = (short)27642;
void init() {
}

void checksum() {
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
