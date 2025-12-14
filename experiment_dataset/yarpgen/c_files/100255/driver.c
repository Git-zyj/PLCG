#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11455;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)223;
signed char var_5 = (signed char)-52;
short var_8 = (short)-13024;
unsigned int var_10 = 2429597243U;
unsigned long long int var_15 = 838006020803967711ULL;
int zero = 0;
signed char var_16 = (signed char)-32;
signed char var_17 = (signed char)-66;
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
