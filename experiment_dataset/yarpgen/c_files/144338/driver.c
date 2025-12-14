#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7555286854507897048LL;
short var_1 = (short)-4510;
signed char var_3 = (signed char)69;
short var_4 = (short)-23667;
unsigned char var_5 = (unsigned char)255;
unsigned long long int var_7 = 1564272975394236056ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)30118;
int zero = 0;
int var_10 = -1535285165;
unsigned int var_11 = 555441540U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
