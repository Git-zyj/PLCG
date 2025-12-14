#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22825;
unsigned long long int var_4 = 14821195387894621206ULL;
unsigned short var_5 = (unsigned short)34649;
signed char var_8 = (signed char)86;
unsigned char var_9 = (unsigned char)202;
unsigned short var_10 = (unsigned short)11384;
long long int var_11 = 883322039155574122LL;
int zero = 0;
short var_12 = (short)29968;
short var_13 = (short)-26467;
unsigned int var_14 = 1369907603U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
