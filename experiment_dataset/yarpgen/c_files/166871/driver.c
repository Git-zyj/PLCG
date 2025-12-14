#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12348;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)55;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)16;
unsigned short var_9 = (unsigned short)4313;
unsigned char var_13 = (unsigned char)115;
int var_16 = 244330486;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6245989830276200506ULL;
unsigned char var_21 = (unsigned char)63;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
