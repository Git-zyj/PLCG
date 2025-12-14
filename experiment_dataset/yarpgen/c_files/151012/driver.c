#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1430669562471778771LL;
short var_2 = (short)-4703;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)103;
short var_6 = (short)-23575;
signed char var_8 = (signed char)37;
signed char var_14 = (signed char)5;
unsigned char var_15 = (unsigned char)132;
unsigned short var_16 = (unsigned short)18604;
int zero = 0;
long long int var_17 = 6969311778945384300LL;
unsigned char var_18 = (unsigned char)6;
unsigned char var_19 = (unsigned char)136;
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
