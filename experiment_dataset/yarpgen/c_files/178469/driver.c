#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62370;
unsigned short var_2 = (unsigned short)39374;
unsigned char var_3 = (unsigned char)133;
unsigned int var_5 = 1223030919U;
unsigned int var_6 = 4016313941U;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-26847;
unsigned int var_13 = 1888819324U;
int zero = 0;
unsigned short var_14 = (unsigned short)16562;
unsigned int var_15 = 1301851961U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
