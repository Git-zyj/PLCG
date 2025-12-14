#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25030;
unsigned short var_1 = (unsigned short)53574;
int var_3 = -862799957;
unsigned char var_5 = (unsigned char)37;
unsigned int var_10 = 4057542201U;
unsigned char var_11 = (unsigned char)143;
unsigned short var_13 = (unsigned short)30021;
short var_15 = (short)30953;
int zero = 0;
int var_16 = 2118953562;
unsigned short var_17 = (unsigned short)45764;
unsigned long long int var_18 = 10510583798253410750ULL;
unsigned char var_19 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
