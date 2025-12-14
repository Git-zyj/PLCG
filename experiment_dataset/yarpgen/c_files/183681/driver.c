#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1596;
unsigned char var_4 = (unsigned char)71;
int var_5 = 474322181;
unsigned short var_6 = (unsigned short)36649;
unsigned char var_7 = (unsigned char)57;
_Bool var_8 = (_Bool)1;
short var_10 = (short)28693;
int zero = 0;
unsigned short var_13 = (unsigned short)49827;
unsigned char var_14 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
