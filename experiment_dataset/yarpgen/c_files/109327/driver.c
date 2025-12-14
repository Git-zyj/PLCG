#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12847;
unsigned char var_1 = (unsigned char)96;
short var_6 = (short)26562;
unsigned short var_10 = (unsigned short)10675;
unsigned long long int var_16 = 14045729052637532131ULL;
unsigned short var_18 = (unsigned short)62712;
int zero = 0;
unsigned short var_19 = (unsigned short)61743;
unsigned char var_20 = (unsigned char)51;
short var_21 = (short)13742;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
