#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16425;
unsigned short var_2 = (unsigned short)49912;
unsigned short var_3 = (unsigned short)63361;
unsigned short var_4 = (unsigned short)34533;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2383295304U;
unsigned char var_9 = (unsigned char)53;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)131;
short var_12 = (short)-24706;
unsigned short var_13 = (unsigned short)51380;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
