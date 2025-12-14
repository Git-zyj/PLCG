#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-30842;
long long int var_11 = 4107211254833005170LL;
int zero = 0;
signed char var_17 = (signed char)-11;
unsigned char var_18 = (unsigned char)120;
unsigned short var_19 = (unsigned short)33230;
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
