#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12912009269674177574ULL;
short var_5 = (short)8088;
short var_7 = (short)-23997;
unsigned long long int var_8 = 7728813252525440104ULL;
unsigned long long int var_18 = 18423681889631161178ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
signed char var_21 = (signed char)81;
unsigned short var_22 = (unsigned short)30514;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
