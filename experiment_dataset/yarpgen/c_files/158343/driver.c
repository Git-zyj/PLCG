#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32753;
unsigned char var_1 = (unsigned char)106;
unsigned char var_2 = (unsigned char)23;
unsigned int var_4 = 1194519895U;
unsigned char var_6 = (unsigned char)204;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)39653;
unsigned char var_11 = (unsigned char)71;
unsigned int var_12 = 2924287702U;
unsigned char var_17 = (unsigned char)86;
int zero = 0;
short var_18 = (short)-16223;
unsigned char var_19 = (unsigned char)251;
unsigned int var_20 = 1994449342U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
