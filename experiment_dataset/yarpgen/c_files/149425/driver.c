#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)46615;
short var_6 = (short)-2515;
long long int var_8 = -368625679609420157LL;
long long int var_11 = -2800164394775466667LL;
long long int var_13 = 847795977066099510LL;
int zero = 0;
long long int var_14 = -7688267288925054058LL;
long long int var_15 = 7053756298041242850LL;
unsigned long long int var_16 = 2835829437250112517ULL;
unsigned short var_17 = (unsigned short)52744;
void init() {
}

void checksum() {
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
