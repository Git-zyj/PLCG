#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5349224301915870694ULL;
unsigned short var_1 = (unsigned short)16991;
unsigned int var_2 = 1324032404U;
long long int var_5 = 6392167101224950070LL;
signed char var_7 = (signed char)60;
unsigned char var_10 = (unsigned char)230;
unsigned char var_13 = (unsigned char)220;
int zero = 0;
unsigned char var_15 = (unsigned char)251;
unsigned char var_16 = (unsigned char)77;
short var_17 = (short)-6448;
int var_18 = -1066223557;
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
