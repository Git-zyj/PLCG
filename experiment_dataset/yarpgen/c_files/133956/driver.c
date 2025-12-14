#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46957;
signed char var_1 = (signed char)-95;
unsigned char var_5 = (unsigned char)167;
long long int var_7 = 5263808759003267662LL;
unsigned short var_8 = (unsigned short)34977;
short var_9 = (short)-28482;
unsigned int var_10 = 4223038714U;
long long int var_13 = -5983906028981829284LL;
unsigned int var_14 = 203568714U;
int zero = 0;
short var_15 = (short)-12376;
unsigned long long int var_16 = 17661365778719708000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
