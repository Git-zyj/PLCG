#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_4 = 7005543015295762634ULL;
unsigned long long int var_5 = 16375516363345825771ULL;
unsigned short var_8 = (unsigned short)57719;
unsigned long long int var_9 = 1592176786430722343ULL;
unsigned short var_10 = (unsigned short)60768;
long long int var_12 = -7142002833733235138LL;
short var_13 = (short)-3805;
int zero = 0;
unsigned char var_14 = (unsigned char)29;
unsigned long long int var_15 = 15642420067949536310ULL;
short var_16 = (short)12353;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
