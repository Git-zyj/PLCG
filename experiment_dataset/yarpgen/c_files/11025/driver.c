#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9264;
unsigned long long int var_1 = 15825131967433613471ULL;
int var_3 = -1070409901;
unsigned long long int var_8 = 4428012776127669350ULL;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
short var_15 = (short)-30292;
short var_16 = (short)3370;
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
