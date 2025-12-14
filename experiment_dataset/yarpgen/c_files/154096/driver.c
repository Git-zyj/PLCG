#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)237;
unsigned char var_13 = (unsigned char)78;
int var_15 = -355228008;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)156;
short var_18 = (short)-14501;
int var_19 = 753478955;
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
