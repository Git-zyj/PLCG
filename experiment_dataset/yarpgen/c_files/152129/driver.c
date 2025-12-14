#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1974223298;
unsigned char var_4 = (unsigned char)3;
long long int var_5 = -2716739048661787965LL;
unsigned short var_6 = (unsigned short)41767;
unsigned short var_7 = (unsigned short)44022;
unsigned short var_8 = (unsigned short)58339;
unsigned char var_10 = (unsigned char)254;
short var_11 = (short)-27041;
int zero = 0;
short var_14 = (short)31818;
signed char var_15 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
