#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17340;
long long int var_5 = 6502011719860387574LL;
unsigned char var_6 = (unsigned char)228;
int var_10 = 508445296;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)22;
int zero = 0;
unsigned char var_15 = (unsigned char)115;
unsigned char var_16 = (unsigned char)103;
void init() {
}

void checksum() {
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
