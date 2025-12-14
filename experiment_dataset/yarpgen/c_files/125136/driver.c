#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25257;
unsigned short var_4 = (unsigned short)51976;
long long int var_5 = 3921276471463404129LL;
long long int var_6 = -3478118038238398574LL;
unsigned long long int var_7 = 16979728995495430786ULL;
unsigned char var_10 = (unsigned char)39;
unsigned short var_11 = (unsigned short)4217;
unsigned int var_12 = 3446686302U;
int zero = 0;
unsigned long long int var_13 = 6843858053149690616ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5201319106605744726LL;
unsigned char var_16 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
