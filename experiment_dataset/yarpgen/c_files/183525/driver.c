#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)200;
unsigned char var_8 = (unsigned char)20;
unsigned short var_9 = (unsigned short)48338;
unsigned short var_10 = (unsigned short)43096;
unsigned int var_11 = 3100615353U;
short var_14 = (short)-21254;
unsigned int var_16 = 2222702308U;
int zero = 0;
unsigned int var_18 = 3126951956U;
long long int var_19 = -1976245378901903998LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
