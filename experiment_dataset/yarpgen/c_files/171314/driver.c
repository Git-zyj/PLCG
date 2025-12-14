#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29005;
long long int var_1 = 8837213688842824992LL;
unsigned char var_5 = (unsigned char)63;
unsigned short var_6 = (unsigned short)61499;
short var_7 = (short)10229;
unsigned int var_8 = 2205790287U;
short var_9 = (short)-11642;
unsigned int var_10 = 3873938837U;
int zero = 0;
unsigned int var_11 = 2345915335U;
unsigned char var_12 = (unsigned char)76;
short var_13 = (short)24864;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)96;
unsigned short var_16 = (unsigned short)37073;
unsigned long long int var_17 = 8806148144778323246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
