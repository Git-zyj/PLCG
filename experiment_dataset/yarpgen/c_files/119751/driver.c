#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24061;
short var_4 = (short)31242;
short var_5 = (short)-31941;
unsigned short var_6 = (unsigned short)60005;
unsigned long long int var_10 = 7219224244651696869ULL;
unsigned char var_11 = (unsigned char)93;
short var_13 = (short)-20288;
int zero = 0;
signed char var_16 = (signed char)53;
long long int var_17 = -6186396098773194308LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
