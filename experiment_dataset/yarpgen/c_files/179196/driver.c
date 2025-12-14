#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1988550469;
unsigned int var_5 = 1050109751U;
unsigned short var_7 = (unsigned short)30700;
unsigned char var_9 = (unsigned char)230;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)231;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
int var_16 = 542953648;
short var_17 = (short)11850;
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
