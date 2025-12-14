#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19892;
unsigned char var_3 = (unsigned char)188;
short var_4 = (short)-31191;
_Bool var_5 = (_Bool)0;
short var_7 = (short)12663;
short var_15 = (short)28182;
int zero = 0;
unsigned long long int var_19 = 14838908661637031575ULL;
unsigned long long int var_20 = 8879410939312375928ULL;
void init() {
}

void checksum() {
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
