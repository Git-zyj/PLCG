#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28780;
unsigned long long int var_3 = 10613006233589535784ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)2078;
unsigned short var_8 = (unsigned short)27900;
long long int var_9 = -1899416346666822605LL;
short var_10 = (short)-19299;
int zero = 0;
unsigned short var_13 = (unsigned short)13225;
long long int var_14 = -2775002811711637203LL;
unsigned char var_15 = (unsigned char)194;
unsigned long long int var_16 = 7037832171596734322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
