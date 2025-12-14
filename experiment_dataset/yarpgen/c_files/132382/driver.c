#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17024;
short var_2 = (short)-3886;
unsigned int var_4 = 1806054565U;
unsigned short var_5 = (unsigned short)34955;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)56402;
int zero = 0;
unsigned char var_12 = (unsigned char)81;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
