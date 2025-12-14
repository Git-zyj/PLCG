#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
long long int var_6 = 8689263607830107224LL;
unsigned short var_7 = (unsigned short)17191;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-9304;
unsigned char var_12 = (unsigned char)137;
int zero = 0;
unsigned short var_14 = (unsigned short)32593;
unsigned int var_15 = 850073570U;
int var_16 = 1397633968;
short var_17 = (short)-5449;
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
