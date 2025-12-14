#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1249731506U;
short var_3 = (short)3885;
unsigned char var_7 = (unsigned char)170;
unsigned int var_9 = 2868505948U;
long long int var_10 = 331573346781220663LL;
int var_11 = 881103034;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)232;
int var_18 = 813046059;
unsigned char var_19 = (unsigned char)106;
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
