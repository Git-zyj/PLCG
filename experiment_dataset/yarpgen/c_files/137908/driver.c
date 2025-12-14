#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2412301143U;
unsigned char var_2 = (unsigned char)126;
long long int var_3 = -7523098691609015805LL;
int var_4 = -421176214;
long long int var_7 = 3215766879898105462LL;
unsigned char var_8 = (unsigned char)183;
unsigned long long int var_9 = 15568433183150344128ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)39658;
int zero = 0;
unsigned short var_17 = (unsigned short)2527;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)21367;
void init() {
}

void checksum() {
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
