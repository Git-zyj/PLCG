#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30651;
unsigned short var_4 = (unsigned short)2522;
signed char var_5 = (signed char)5;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)5177;
unsigned short var_9 = (unsigned short)56702;
int zero = 0;
short var_11 = (short)10502;
short var_12 = (short)-22480;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
