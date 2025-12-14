#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9485608742358392919ULL;
short var_3 = (short)-31971;
unsigned int var_6 = 1804778689U;
int var_9 = -1107464116;
unsigned int var_10 = 518141834U;
unsigned int var_11 = 3257656933U;
unsigned short var_12 = (unsigned short)19720;
signed char var_13 = (signed char)78;
int zero = 0;
int var_15 = -759696527;
unsigned int var_16 = 2943398491U;
short var_17 = (short)-8057;
unsigned short var_18 = (unsigned short)62842;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
