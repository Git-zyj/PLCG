#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25329;
unsigned char var_5 = (unsigned char)69;
unsigned char var_13 = (unsigned char)76;
unsigned char var_15 = (unsigned char)232;
unsigned long long int var_16 = 15334816818958140021ULL;
int zero = 0;
unsigned long long int var_19 = 16367564096234817774ULL;
short var_20 = (short)-21457;
unsigned char var_21 = (unsigned char)152;
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
